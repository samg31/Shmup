#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include "SDL.h"
#include <vector>
#include "bullet.hpp"

extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;
extern const int SCREEN_FPS;
extern const int SCREEN_TICKS_PER_FRAME;

extern const Uint8* currentKeyStates;

extern SDL_Surface* gScreenSurface;
extern SDL_Window* gWindow;

extern SDL_Renderer* gRenderer;
extern SDL_Texture* gTexture;

extern std::vector<Bullet*> gAllBullets;

#endif
