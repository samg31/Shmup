#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "SDL.h"
#include "globals.hpp"
#include "ltimer.hpp"

class Enemy
{
public:
    bool Left;
    SDL_Texture* EnemyTexture;
    SDL_Rect EnemyBox;
    LTimer MoveTimer;
public:
    Enemy( int x, int y );
    ~Enemy();
    void Render();
    void Move();
    void MoveDown();
    int getX();
    int getY();
};

#endif
