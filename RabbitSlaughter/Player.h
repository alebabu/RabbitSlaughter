//
//  Player.h
//  RabbitSlaughter
//
//  Created by Aleksandar Babunovic on 2016-12-01.
//  Copyright © 2016 Aleksandar Babunovic. All rights reserved.
//

#ifndef Player_h
#define Player_h

class Player {
    public:
    Player(int);
    Player();
    ~Player();
    // get and set functions
    int getX();
    int getY();
    void setX(int);
    void setY(int);
    void move();
    

    private:
    int x;
    int y;
};

#endif /* Player_h */
