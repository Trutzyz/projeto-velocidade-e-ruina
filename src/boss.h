#ifndef BOSS_H
#define BOSS_H

#include "raylib.h"
#include "player.h"

typedef struct Boss {
    Vector2 position;
    int hp;
    Texture2D texture;
} Boss;

Boss InitBoss(void);
void UpdateBoss(Boss *b, Player *p);
void DrawBoss(Boss *b);

#endif
