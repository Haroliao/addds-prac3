#ifndef Human_H
#define Human_H
#include "Player.h"
class Human:public Player{
public:
      Human();
      virtual char makeMove();
      char move;
    

};
#endif