#include "boss.h"
#include "raylib.h"

Boss InitBoss(void)
{
    Boss b = {0};
    b.position = (Vector2){900, 400};
    b.texture = LoadTexture("assets/sprites/boss1.png");
    b.hp = 100;
    return b;
}

void UpdateBoss(Boss *b, Player *p)
{
    if (p->position.x > b->position.x) b->position.x += 1.0f;
    else b->position.x -= 1.0f;
}

void DrawBoss(Boss *b)
{
    DrawTexture(b->texture, b->position.x, b->position.y, WHITE);
}

