#include "bullet.hpp"
#include "globals.hpp"
#include "images.hpp"
#include <iostream>

Bullet::Bullet( int x, int y )
    :BulletTexture( load_texture( "../img/tux.png" ) )
{
    BulletBox.w = BulletBox.h = 4;
    BulletBox.x = x;
    BulletBox.y = y;
}

int Bullet::getX()
{
    return BulletBox.x;
}

int Bullet::getY()
{
    return BulletBox.y;
}

void Bullet::Render()
{
    SDL_RenderCopy( gRenderer, BulletTexture, nullptr, &BulletBox );
}

void Bullet::Move()
{
    if( this->BulletBox.y > 0 )
	this->BulletBox.y -= 4;
    else
    {
	delete gAllBullets[0];
	gAllBullets.erase( gAllBullets.begin() );
    }
}

Bullet::~Bullet()
{
    SDL_DestroyTexture( BulletTexture );
}
