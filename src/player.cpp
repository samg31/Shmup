#include "player.hpp"
#include "images.hpp"
#include "globals.hpp"
#include "bullet.hpp"
#include <iostream>

Player::Player()
    :PlayerTexture( load_texture( "../img/tux.png" ) )
{
    PlayerBox.w = PlayerBox.h = 16;
    PlayerBox.x = 0;
    PlayerBox.y = SCREEN_HEIGHT - 16;
}

Player::~Player()
{
    SDL_DestroyTexture( PlayerTexture );
}

void Player::Render()
{
    SDL_RenderCopy( gRenderer, PlayerTexture, nullptr, &PlayerBox );
}

Bullet* Player::Shoot()
{
    Bullet* b = new Bullet( PlayerBox.x, PlayerBox.y );
    gAllBullets.push_back( b );
    return b;
}

void Player::HandleInput( SDL_Event* e )
{
    if( currentKeyStates[ SDL_SCANCODE_RIGHT ] )
    {
	if( PlayerBox.x == SCREEN_WIDTH - 16 )
	    PlayerBox.x = -16;
	PlayerBox.x += 16;
    }
    if( currentKeyStates[ SDL_SCANCODE_LEFT ] )
    {
	if( PlayerBox.x == 0 )
	    PlayerBox.x = SCREEN_WIDTH;		    
	PlayerBox.x -= 16;
    }
    if( currentKeyStates[ SDL_SCANCODE_SPACE ] )
    {
	b = Shoot();
    }
     
    /*switch( e->key.keysym.sym )
		{
		    case SDLK_RIGHT:
		    if( PlayerBox.x == SCREEN_WIDTH - 16 )
			PlayerBox.x = -16;
		    PlayerBox.x += 16;
		    break;
		case SDLK_LEFT:
		    if( PlayerBox.x == 0 )
			PlayerBox.x = SCREEN_WIDTH;		    
		    PlayerBox.x -= 16;
		    break;
		case SDLK_DOWN:
		    if( PlayerBox.y == SCREEN_HEIGHT - 16 )
			PlayerBox.y = -16;
		    PlayerBox.y += 16;
		    break;
		case SDLK_UP:
		    if( PlayerBox.y == 0 )
			PlayerBox.y = SCREEN_HEIGHT;
		    PlayerBox.y -= 16;
		    break;
		    }*/
    
}
