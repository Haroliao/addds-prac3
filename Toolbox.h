#ifndef Toolbox_H
#define Toolbox_H
#include<iostream>
#include "Player.h"
class Toolbox:public Player{
public:
    Toolbox();
    virtual char makeMove();
};
#endif