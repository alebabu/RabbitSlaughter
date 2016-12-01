#include <stdio.h>
#include "Player.h"

Player::Player(int x)
{
    //Constructor
    this->x = x;
    //Player:: x = x;
    printf("Player initialized at position: (%i,y).\n", x);
}

Player::~Player()
{
    //Destructor
    printf("Oh no, I'm being destroyed!!\n");
}

int Player::getX()
{
    return x;
}

void Player::setX(int x){
    this->x = x;
}

int Player::getY()
{
    return y;
}

void Player::setY(int y){
    this->y = y;
}
