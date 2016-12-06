#include "MainController.h"

/*
 * Prepare all the objects
 */
MainController::MainController()
{

    
    //Testing the view.
    //mainWindow = new MainWindow(800,600,"Kaninslakt");
    
    //The view wants a world object (preferably an interface to RabbitGame) to know background and foreground images,
    //and to get all drawable gameobjects. Some required functions are:
    /*
     *string GetBackground() //The path to a BMP-picture with the game background
     *string GetForeground() //The path to a BMP-picture with the game foreground
     *IDrawableObject*[] GetGameObjects() //An array with all the gameobjects to draw
     */
    
    //mainWindow->InitView(world);
    //mainWindow->Update(0);
    playerController = new PlayerController();
    game = new RabbitGame();
    
}

MainController::~MainController()
{
    delete mainWindow;
}

/*
 * Run the game
 */

void MainController::start()
{
    run();
}

void MainController::run()
{
    /*
     I excpect that the mainWindow will have a QUIT_BUTTON
     */
    while(/*!mainWindow->QUIT_BUTTON*/ true)
        {
            //game->update();
            
        }
}

void MainController::update()
{
    
}
