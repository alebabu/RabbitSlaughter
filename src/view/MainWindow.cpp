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
	printf("Destroying window...\n");
	SDL_DestroyWindow(mainWindow);
	SDL_DestroyTexture(background);
	SDL_DestroyRenderer(renderer);

	SDL_Quit();
}

int MainWindow::InitView(World* world)
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
	SDL_FillRect(mainSurface, NULL, SDL_MapRGB((*mainSurface).format, 100, 10, 200));

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

int MainWindow::CreateRenderer()
{
	//Using OpenGL
	renderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED);

	if (renderer == NULL)
		return -1;

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	
}

SDL_Texture* MainWindow::LoadTexture(char* path)
{
	SDL_Texture* texture = NULL;

	SDL_Surface* tmpSurface = SDL_LoadBMP(path);

	if (tmpSurface == NULL)
		printf("Unable to load image: %s. \nCause: %s\n", path, SDL_GetError());

	texture = SDL_CreateTextureFromSurface(renderer, tmpSurface);
	if(texture == NULL)
		printf("Unable to load texture. \nCause: %s\n", SDL_GetError());

	//Reallocate
	SDL_FreeSurface(tmpSurface);

	return texture;
}