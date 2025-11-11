#include "player.h"
#include "raylib.h"

Player InitPlayer(void)
{
    Player p = {0};
    p.position = (Vector2){200, 500};
    p.speed = 5.0f;
    p.texture = LoadTexture("assets/sprites/player.png");
    return p;
}

void UpdatePlayer(Player *p)
{
    if (IsKeyDown(KEY_RIGHT)) p->position.x += p->speed;
    if (IsKeyDown(KEY_LEFT)) p->position.x -= p->speed;
    if (IsKeyDown(KEY_UP)) p->position.y -= p->speed;
    if (IsKeyDown(KEY_DOWN)) p->position.y += p->speed;
}

void DrawPlayer(Player *p)
{
    DrawTexture(p->texture, p->position.x, p->position.y, WHITE);
}
