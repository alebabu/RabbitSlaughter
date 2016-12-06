#include <stdio.h>
#include "model/Player.h"
#include "controller/MainController.h"

using namespace std;

MainController* mainController;

int main(int argc, char* args[])
{
    mainController = new MainController();
    mainController->start();

	delete mainController;

	return 0;
}
