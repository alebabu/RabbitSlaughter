#ifndef WINDOW_H
#define WINDOW_H

#include "../SDLWrapper.h"

class MainWindow
{
	public:
		MainWindow();
		MainWindow(unsigned int, unsigned int);
		~MainWindow();
	private:
		const unsigned int WINDOW_WIDTH;
		const unsigned int WINDOW_HEIGHT;

		SDL_Window* mainWindow = NULL;
		SDL_Surface* mainSurface = NULL;
};

#endif //WINDOW_H