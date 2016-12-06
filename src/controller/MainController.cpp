#include "MainController.h"

/*
 * Prepare all the objects
 */
MainController::MainController()
{

    
    //Testing the view.
   
    
    //The view wants a world object (preferably an interface to RabbitGame) to know background and foreground images,
    //and to get all drawable gameobjects. Some required functions are:
    /*
     *string GetBackground() //The path to a BMP-picture with the game background
     *IDrawableObject*[] GetGameObjects() //An array with all the gameobjects to draw
     */

    
    
}

MainController::~MainController()
{
	//Destructor
}

/*
 * Run the game
 */

void MainController::start()
{
	mainWindow = new MainWindow(800, 600, "Kaninslakt");
	if (mainWindow->InitView(/*worldObject, interface implemented by RabbitGame*/) == -1)
		return;

	playerController = new PlayerController();
	game = new RabbitGame();

    run();
}

void MainController::run()
{
	SDL_Event event;
	bool running = true;

    while(running)
    {
		//As long as there are events in the queue, handle them here
		//Will skip this if there are no events
		while (SDL_PollEvent(&event) != 0) 
		{
			//Please do the same loop in playerController but do a switch on key inputs,
			//do not handle key inputs here, only quit event <3

			if (event.type == SDL_QUIT)
			{
				running = false;
			}
		}
		update();
		
		//To not burn the graphics card or CPU
		SDL_Delay(50);

		//deltaTime = currentTime - lastTime;
		//lastTime = currentTime;
    }
	
	//Quit here
	delete playerController;
	delete game;
	delete mainWindow;
}

void MainController::update()
{
	/*
	*	MAIN GAME LOOP
	*/
	
	//playerController.update();
	//RabbitGame.update(getDeltaTime());
	mainWindow->Update(200);
}
