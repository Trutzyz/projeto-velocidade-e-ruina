#include "scene.h"
#include "raylib.h"

static Texture2D background;

void InitScene(void)
{
    background = LoadTexture("../assets/backgrounds/city.png");
}

void DrawScene(void)
{
    DrawTexture(background, 0, 0, WHITE);
}
