#include "raylib.h"
#include "player.h"
#include "boss.h"
#include "scene.h"

int main(void)
{
    const int screenWidth = 1368;
    const int screenHeight = 744;

    InitWindow(screenWidth, screenHeight, "Velocidade e Ruina");
    SetTargetFPS(60);

    InitScene();
    Player player = InitPlayer();
    Boss boss = InitBoss();

    while (!WindowShouldClose())
    {
        UpdatePlayer(&player);
        UpdateBoss(&boss, &player);

        BeginDrawing();
            ClearBackground(BLACK);
            DrawScene();
            DrawPlayer(&player);
            DrawBoss(&boss);
            DrawText("Velocidade e Ruina", 20, 20, 24, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
