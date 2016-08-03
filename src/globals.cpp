#include "globals.hpp"

const int SCREEN_WIDTH = 256;
const int SCREEN_HEIGHT = 128;
const int SCREEN_FPS = 60;
const int SCREEN_TICKS_PER_FRAME = 1000 / SCREEN_FPS;

const Uint8* currentKeyStates = SDL_GetKeyboardState( nullptr );

SDL_Surface* gScreenSurface = nullptr;
SDL_Window* gWindow = nullptr;

SDL_Renderer* gRenderer = nullptr;
SDL_Texture* gTexture = nullptr;

std::vector<Bullet*> gAllBullets;
