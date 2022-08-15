#ifndef FistfullODollars_H
#define FistfullODollars_H
#include<iostream>
#include "Player.h"
class FistfullODollars:public Player{
public:
     FistfullODollars();
     virtual char makeMove();
     int counter;

}; 
#endif