#include "images.hpp"
#include "globals.hpp"
#include <cassert>

SDL_Surface* load_surface( std::string path )
{
    SDL_Surface* optimized_surface = nullptr;
    SDL_Surface* loaded_surface = IMG_Load( path.c_str() );

    assert( loaded_surface );
    optimized_surface = SDL_ConvertSurface( loaded_surface,
					    gScreenSurface->format,
					    0 );
    assert( optimized_surface );
    SDL_FreeSurface( loaded_surface );

    return optimized_surface;
}

SDL_Texture* load_texture( std::string path )
{
    SDL_Texture* new_texture = nullptr;
    SDL_Surface* loaded_surface = IMG_Load( path.c_str() );
    assert( loaded_surface );

    new_texture = SDL_CreateTextureFromSurface( gRenderer, loaded_surface );
    assert( new_texture );

    SDL_FreeSurface( loaded_surface );

    return new_texture;
}
