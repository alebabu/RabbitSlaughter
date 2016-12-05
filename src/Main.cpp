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

	mainWindow->InitView();
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
