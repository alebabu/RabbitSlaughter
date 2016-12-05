#include <stdio.h>
#include "model/Player.h"
#include "SDLWrapper.h"

#define MAC_OS
//#define WINDOWS

#ifdef WINDOWS
#include <Windows.h>
#endif
#ifdef MAC_OS
#include <unistd.h>
#endif

using namespace std;

int main(int argc, char* args[])
{

	printf("Hello Aleksandar!\n");

	/*
	
	IN C++:
	new-operator puts object on heap (typically RAM) and requires .delete after
	if not used, you can not pass the (pointer to the )object around in different scopes!
	
	*/

	//Create a pointer to a created object on the heap
	Player* player = new Player(25);

	//The nicer way to do it
	int x1 = player->getX();

	//The java way to do it
	int x2 = (*player).getX();

	printf("The player's x-value is %i which is equal to %i. \n", x1, x2);

	//Kill it
	delete player;

#ifdef WINDOWS
	Sleep(10*1000);
#else
#ifdef MAC_OS
    usleep(10*100);
#else
	scanf("%c");
    
#endif
#endif

	return 0;
}
