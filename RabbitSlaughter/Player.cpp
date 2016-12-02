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

	int Player::getX()
	{
		return x;
	}

