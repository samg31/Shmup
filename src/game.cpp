#include "game.hpp"
#include <cassert>

//create SDL window and allow for png loading
void Game::Start()
{
    assert( SDL_Init( SDL_INIT_EVERYTHING ) >= 0 );
    mWindow = SDL_CreateWindow( "Shmup", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
				SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    assert( mWindow );

    mRenderer = SDL_CreateRenderer( mWindow, -1, SDL_RENDERER_ACCELERATED );
    assert( mRenderer );

    int imgFlags = IMG_INIT_PNG;
    assert( IMG_Init( imgFlags ) & imgFlags );

    SDL_SetRenderDrawColor( mRenderer, 0x00, 0x00, 0x00, 0xFF );
}

//free renderer and window and quit sdl
void Game::Close()
{
    SDL_DestroyRenderer( mRenderer );
    SDL_DestroyWindow( mWindow );

    IMG_Quit();
    SDL_Quit();
}

void Game::UpdateRenderer()
{
    SDL_RenderClear( mRenderer );
    SDL_RenderPresent( mRenderer );
}
