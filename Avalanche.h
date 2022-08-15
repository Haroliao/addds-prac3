#ifndef Avalanche_H
#define Avalanche_H
#include<iostream>
#include "Player.h"
class Avalanche:public Player{
public:
    Avalanche();
    virtual char makeMove();
};
#endif