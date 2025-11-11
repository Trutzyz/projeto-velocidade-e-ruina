# 🏎️ Velocidade e Ruína

**Velocidade e Ruína** é um jogo 2D desenvolvido em **C** com a biblioteca [Raylib](https://www.raylib.com/).  
Misturando ação e adrenalina, o jogador enfrenta desafios em um ambiente urbano, alternando entre velocidade, estratégia e sobrevivência.

O projeto foi criado com foco em **simplicidade**, **performance** e **aprendizado** sobre desenvolvimento de jogos em C.

---

## 🚀 Funcionalidades principais

- Gráficos 2D com **Raylib**  
- Sistema modular de **cenas e entidades**  
- Movimentação fluida do jogador  
- Chefes e inimigos com IA básica  
- Interface leve e responsiva

---

## 🧰 Estrutura do projeto

```
velocidade_e_ruina/
├── assets/
│   ├── backgrounds/
│   │   └── city.png
│   └── sprites/
│       ├── player.png
│       ├── boss1.png
│       └── explosion.png
├── build/
│   └── velocidade_e_ruina.exe (gerado após compilação)
├── include/
│   └── *.h
├── src/
│   └── *.c
├── lib/
│   └── (bibliotecas externas, ex: raylib)
└── Makefile
```

---

## 🪟 Compilação no **Windows**

### 🔧 Dependências

- [MSYS2](https://www.msys2.org/) (use o terminal **MSYS2 MinGW 64-bit**)  
- GCC (via MinGW)  
- Raylib  
- Make

### 📦 Instalação passo a passo

1. Abra `MSYS2 MinGW 64-bit`.
2. Atualize os pacotes:
   ```bash
   pacman -Syu
   ```
   (se pedir reiniciar o terminal, reabra e repita `pacman -Syu` até terminar)
3. Instale o compilador e o Raylib:
   ```bash
   pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-raylib make
   ```
4. Clone o repositório e compile:
   ```bash
   git clone https://github.com/SEU_USUARIO/velocidade_e_ruina.git
   cd velocidade_e_ruina
   make
   ```
5. Execute:
   ```bash
   ./build/velocidade_e_ruina.exe
   ```

> 💡 Se o jogo não encontrar os assets, copie a pasta `assets/` para dentro de `build/` ou use `make run` caso o Makefile já faça a cópia.

---

## 🐧 Compilação no **Linux (Ubuntu / Debian)**

### 🔧 Dependências

- build-essential (gcc, make)  
- CMake (opcional)  
- Git  
- Raylib (pacote ou compilado manualmente)

### 📦 Instalação passo a passo

1. Instale dependências gerais:
   ```bash
   sudo apt update
   sudo apt install build-essential git make pkg-config
   ```
2. Tentar instalar Raylib via repositório:
   ```bash
   sudo apt install libraylib-dev
   ```
   Se `libraylib-dev` não existir na sua distro, compile Raylib:
   ```bash
   git clone https://github.com/raysan5/raylib.git
   cd raylib
   mkdir build && cd build
   cmake -DCMAKE_BUILD_TYPE=Release ..
   make
   sudo make install
   ```
   (pode precisar instalar dependências extras: `libx11-dev libxcursor-dev libxrandr-dev libxinerama-dev libxi-dev libgl1-mesa-dev`)
3. Clone o projeto e compile:
   ```bash
   git clone https://github.com/SEU_USUARIO/velocidade_e_ruina.git
   cd velocidade_e_ruina
   make
   ```
4. Execute:
   ```bash
   ./build/velocidade_e_ruina
   ```

---

## 👨‍💻 Créditos

Desenvolvido por: **João Ricardo Leitão Barros**

Projeto acadêmico para a disciplina **Aprendizado de Máquina - CESAR School (2024.2)**

Biblioteca principal: [Raylib](https://www.raylib.com/)  
Linguagem: **C99**
