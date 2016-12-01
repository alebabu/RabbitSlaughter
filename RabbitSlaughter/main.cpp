#include <stdio.h>
//#include <SDL.h>
#define AleksComputer
#ifdef AleksComputer
#include "/Library/Frameworks/SDL2.framework/Headers/SDL.h"
#endif

#include "Player.h"
#include <unistd.h>

//#define WINDOWS
#define IOS

#ifdef WINDOWS
#i/System/Library/CoreServices/Finder.app/Contents/Resources/MyLibraries/myDocuments.cannedSearchnclude <Windows.h>
#endif

using namespace std;

int main(int argc, char* args[])
{

	printf("Hello Alex!\n");

	/*
	
	IN C++:
	new-operator puts object on heap (typically RAM) and requires .delete after

	if not used, you can not pass the (pointer to the )object around in different scopes!
	
	*/

	//Create a pointer to a created object on the heap
    Player * players[1024*10];
    for (int i = 0; i < 1024; i++) {
        players[i] = new Player(i);
    }
    
    
	Player* player = new Player(25);

	//The nicer way to do it
	int x1 = player->getX();

	//The java way to do it
	int x2 = (*player).getX();

	printf("The player's x-value is %i which is equal to %i. \n", x1, x2);

	//Kill it
	delete player;
    
    printf("done");

#ifdef WINDOWS
	Sleep(10*1000);
#else
#ifdef IOS
    usleep(10*1000);
#else
//    scanf("%c");
#endif
#endif
    
    for (int i = 0; i < 1024; i++) {
        delete players[i];
    }

	return 0;
}
