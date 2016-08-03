#ifndef GAME_HPP
#define GAME_HPP

#include "SDL.h"
#include "SDL_image.h"
#include "ltimer.hpp"

class Game
{
public:
    void Start();
    void Close();
    void UpdateRenderer();
    
private:
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;

    SDL_Renderer* mRenderer;
    SDL_Window* mWindow;
};

#endif
