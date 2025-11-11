#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

typedef struct Player {
    Vector2 position;
    float speed;
    Texture2D texture;
} Player;

Player InitPlayer(void);
void UpdatePlayer(Player *p);
void DrawPlayer(Player *p);

#endif
