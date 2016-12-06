#include <stdio.h>
#include "model/Player.h"
#include "view/MainWindow.h"
#include "SDLWrapper.h"

//#define MAC_OS
#define WINDOWS

#ifdef WINDOWS
#include <Windows.h>
#endif
#ifdef MAC_OS
#include <unistd.h>
#endif

using namespace std;

int main(int argc, char* args[])
{

	//Testing the view.
	MainWindow* mainWindow = new MainWindow(800,600,"Kaninslakt");

	//The view wants a world object (preferably an interface to RabbitGame) to know background and foreground images,
	//and to get all drawable gameobjects. Some required functions are: 
	/*
	 *string GetBackground() //The path to a BMP-picture with the game background
	 *string GetForeground() //The path to a BMP-picture with the game foreground
	 *IDrawableObject*[] GetGameObjects() //An array with all the gameobjects to draw
	 */
	mainWindow->InitView(world);
	mainWindow->Update(0);

#ifdef WINDOWS
	Sleep(10*1000);
#else
#ifdef MAC_OS
    usleep(10*100);
#else
	scanf("%c");
    
#endif
#endif

	delete mainWindow;

	return 0;
}
