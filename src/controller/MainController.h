#ifndef MainController_h
#define MainController_h
#include "RabbitGame.h"
#include "MainWindow.h"
#include "PlayerController.h"

class MainController
{
    
public:
    MainController();
    ~MainController();
    void start();
    
private:
    RabbitGame* game;
    MainWindow* mainWindow;
    PlayerController* playerController;
    void run(void);
    void update(void);
};

#endif
