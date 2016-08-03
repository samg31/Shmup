#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "SDL.h"
#include "bullet.hpp"

class Player
{
    SDL_Texture* PlayerTexture; //graphical representation of player
    SDL_Rect PlayerBox; //actual location and size data of player
    Bullet* b;

public:
    Player();
    ~Player();
    void Render();
    Bullet* Shoot();
    void HandleInput( SDL_Event* e );
};




#endif
