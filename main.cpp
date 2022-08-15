#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"
#include "Player.h"
#include <array>
using namespace std;
int main(){
    Player* p1=new Human();
    Player* p2=new FistfullODollars();
    Player* p3=new Avalanche();
    Player* p4=new Bureaucrat();
    Player* p5=new RandomComputer();
    Player* p6=new Toolbox();
    Player* p7=new Crescendo();
    Player* p8=new PaperDoll();
    
    array<Player*,8>competitors;
    competitors[0]=p1;
    competitors[1]=p2;
    competitors[2]=p3;
    competitors[3]=p4;
    competitors[4]=p5;
    competitors[5]=p6;
    competitors[6]=p7;
    competitors[7]=p8;
    Tournament RSP;
    RSP.run(competitors);
    return 0;
}