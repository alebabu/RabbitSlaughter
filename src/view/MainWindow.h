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

		int InitView(World*);
		void Update(int);
	private:
		int CreateWindow();
		int CreateSurface();
		int CreateRenderer();
		SDL_Texture* LoadTexture(char*);

		const unsigned int WINDOW_WIDTH;
		const unsigned int WINDOW_HEIGHT;
		char* WINDOW_TITLE;
        
		SDL_Window* mainWindow = NULL;
		SDL_Surface* mainSurface = NULL;

		SDL_Texture* background = NULL;
		SDL_Texture* foreground = NULL;
		SDL_Renderer* renderer = NULL;
};

#endif //WINDOW_H