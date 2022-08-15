#ifndef Crescendo_H
#define Crescendo_H
#include<iostream>
#include "Player.h"
class Crescendo:public Player{
public:
     Crescendo();
     virtual char makeMove();
     int counter;

}; 
#endif