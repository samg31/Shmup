#include "enemy.hpp"
#include "images.hpp"

Enemy::Enemy( int x, int y )
    :EnemyTexture( load_texture( "../img/tux2.png" ) ),
     Left( false )
{
    EnemyBox.x = x;
    EnemyBox.y = y;
    EnemyBox.w = EnemyBox.h = 16;
    MoveTimer.start();
}

void Enemy::Move()
{
    {
	if( Left )
	{
	    if( EnemyBox.x == 16 )
	    {
		MoveDown();
		Left = false;
	    }
	    else
		EnemyBox.x -= 16;
	}
	else if( !Left )
	{
	    if( EnemyBox.x == SCREEN_WIDTH - 16 )
	    {
		MoveDown();
		Left = true;
	    }
	    else
		EnemyBox.x += 16;
	}
    }
}

void Enemy::MoveDown()
    
{
    EnemyBox.y += 16;
}

void Enemy::Render()
{
    SDL_RenderCopy( gRenderer, EnemyTexture, nullptr, &EnemyBox );
}

int Enemy::getX()
{
    return EnemyBox.x;
}

int Enemy::getY()
{
    return EnemyBox.y;
}

Enemy::~Enemy()
{
    SDL_DestroyTexture( EnemyTexture );
}
