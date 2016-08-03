#ifndef IMAGES_HPP
#define IMAGES_HPP

#include "SDL.h"
#include "SDL_image.h"
#include <string>

SDL_Surface* load_surface( std::string path );
SDL_Texture* load_texture( std::string path );

#endif
