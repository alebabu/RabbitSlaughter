#include "MainWindow.h"


//This is called initializer list and is requred for const variables
MainWindow::MainWindow(unsigned int width, unsigned int height, char* title) : WINDOW_WIDTH(width), WINDOW_HEIGHT(height), WINDOW_TITLE(title)
{
	//Bla bla constructor code
}

MainWindow::MainWindow() : MainWindow(800,600,"Rabbit's Laughter")
{
	//No arguments, use default
}

MainWindow::~MainWindow()
{

}

int MainWindow::InitView()
{
	//SDL returns -1 if it failed.
	if (SDL_Init(SDL_INIT_VIDEO) == -1)
	{
		printf("Ops! Could not initialize SDL.\n Cause: %s\n", SDL_GetError());
		return -1;
	}

	if (CreateWindow() == -1)
		return -1;

	if (CreateSurface() == -1)
		return -1;

	return 0;
}

void MainWindow::Update(int fps)
{
	SDL_FillRect(mainSurface, NULL, SDL_MapRGB((*mainSurface).format, 10, 10, 10));

	SDL_UpdateWindowSurface(mainWindow);
}

int MainWindow::CreateWindow()
{
	mainWindow = SDL_CreateWindow(
		WINDOW_TITLE,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN);

	if (mainWindow == NULL)
	{
		printf("Could not create window. \nCause: %s\n", SDL_GetError());
		return -1;
	}

	return 0;
}

int MainWindow::CreateSurface()
{
	mainSurface = SDL_GetWindowSurface(mainWindow);
	
	if (mainWindow == NULL)
	{
		printf("Could not create surface. \nCause: %s\n", SDL_GetError());
		return -1;
	}

	return 0;
}