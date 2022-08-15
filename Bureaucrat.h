#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Player.h"


class Bureaucrat:public Player{
    public:

    //Functions
    Bureaucrat();
    virtual char makeMove();

    //Variables
    char move;

};
#endif