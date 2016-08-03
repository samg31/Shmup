#ifndef INIT_CLOSE_HPP
#define INIT_CLOSE_HPP

#include "init_close.hpp"
#include "SDL.h"
#include "SDL_image.h"
#include "globals.hpp"
#include <cassert>

void init()
{
    assert( SDL_Init( SDL_INIT_EVERYTHING ) >= 0 );
    gWindow = SDL_CreateWindow( "Space", SDL_WINDOWPOS_UNDEFINED,
			       SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
				SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    assert( gWindow );

    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    assert( gRenderer );

    int imgFlags = IMG_INIT_PNG;
    assert( IMG_Init( imgFlags ) & imgFlags );

    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
}

void close()
{
    SDL_DestroyTexture( gTexture );
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );

    IMG_Quit();
    SDL_Quit();
}

#endif
