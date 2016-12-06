#include <stdio.h>
#include "model/Player.h"
#include "MainController.h"
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

MainController* mainController;

int main(int argc, char* args[])
{
    mainController = new MainController();
    mainController->start();

#ifdef WINDOWS
	Sleep(10*1000);
#else
#ifdef MAC_OS
    usleep(10*100);
#else
	scanf("%c");
    
#endif
#endif

	delete mainController;

	return 0;
}
