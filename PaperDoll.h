#ifndef PaperDoll_H
#define PaperDoll_H
#include<iostream>
#include "Player.h"
class PaperDoll:public Player{
public:
     PaperDoll();
     virtual char makeMove();
     int counter;

}; 
#endif