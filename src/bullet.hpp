#ifndef BULLET_HPP
#define BULLET_HPP

#include "SDL.h"

class Bullet
{
public:
    int x;
    int y;
    SDL_Rect BulletBox;
    SDL_Texture* BulletTexture;
public:
    Bullet( int x, int y );
    ~Bullet();
    void Render();
    void Move();
    int getX();
    int getY();
};

#endif
