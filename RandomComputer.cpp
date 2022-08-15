#include "RandomComputer.h"
#include "Player.h"
#include <stdlib.h>
using namespace std;
RandomComputer::RandomComputer(){

}
char RandomComputer::makeMove(){
    random=rand()%3+1;
    if (random==1){
        move='R';
    }
    if (random==2){
        move='P';
    }
    if (random==3){
        move='S';
    }
return move;
}