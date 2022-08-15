#ifndef RandomComp_H
#define RandomComp_H
#include<iostream>
#include "Player.h"
class RandomComputer:public Player{
public:
     RandomComputer();
     virtual char makeMove();
    int random;
    char move;

}; 
#endif