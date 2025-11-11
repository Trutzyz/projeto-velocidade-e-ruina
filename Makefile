# === Detecta o sistema operacional ===
ifeq ($(OS),Windows_NT)
    TARGET = build/velocidade_e_ruina.exe
    RM = del /Q
    MKDIR = if not exist build mkdir build
    COPY = xcopy /E /Y "$(ASSETS_DIR)" "build\assets" >nul
    LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm
else
    TARGET = build/velocidade_e_ruina
    RM = rm -f
    MKDIR = mkdir -p build
    COPY = cp -r $(ASSETS_DIR) build/
    LIBS = -lraylib -lm -lpthread -ldl -lGL -lX11
endif

# === Compilador e flags ===
CC = gcc
CFLAGS = -Wall -std=c99 -I./src -I./include
LDFLAGS = -L./lib

# === Estrutura de pastas ===
SRC_DIR = src
BUILD_DIR = build
ASSETS_DIR = assets

# === Arquivos fonte ===
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# === Regras principais ===
all: prepare $(TARGET)

prepare:
	@$(MKDIR)
	@echo ">> Build directory ready."

$(TARGET): $(OBJ)
	@echo ">> Linking $(TARGET)..."
	$(CC) $(OBJ) -o $@ $(LDFLAGS) $(LIBS)
	@echo ">> Build complete!"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo ">> Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	@echo ">> Copying assets..."
	@$(COPY)
	@echo ">> Running game..."
	@$(TARGET)

clean:
	@echo ">> Cleaning build..."
	-@$(RM) $(BUILD_DIR)/* $(TARGET) 2>nul || true
	@echo ">> Clean complete!"
