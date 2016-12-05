#include "MainWindow.h"


//This is called initializer list and is requred for const variables
MainWindow::MainWindow(unsigned int width, unsigned int height) : WINDOW_WIDTH(width), WINDOW_HEIGHT(height)
{
	//Bla bla constructor code
}

MainWindow::MainWindow()
{
	//TODO, check interwebz how to call own constructor here
	this(800, 600);
}
