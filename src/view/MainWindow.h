#ifndef WINDOW_H
#define WINDOW_H

#include "../SDLWrapper.h"
#include <stdio.h>

class MainWindow
{
	public:
		MainWindow();
		MainWindow(unsigned int, unsigned int, char*);
		~MainWindow();

		int InitView();
		void Update(int);
	private:
		int CreateWindow();
		int CreateSurface();

		const unsigned int WINDOW_WIDTH;
		const unsigned int WINDOW_HEIGHT;
		char* WINDOW_TITLE;
        
		SDL_Window* mainWindow = NULL;
		SDL_Surface* mainSurface = NULL;
};

#endif //WINDOW_H