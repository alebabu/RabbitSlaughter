#include <stdio.h>
#include "Player.h"

Player::Player(int x)
{
    //Constructor
    Player:: x = x;
    printf("Player initialized at position: (%i,y).\n", x);
}

Player::~Player()
{
    //Destructor
    printf("Oh no, I'm being destroyed!!\n");
}




// get and set methods

int Player::getX()
{
    return x;
}

int Player::getY()
{
    return y;
}

void Player::setX(int x)
{
    this->x = x;
}

void Player::setY(int y)
{
    this->y = y;
}
