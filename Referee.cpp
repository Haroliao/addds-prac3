#include<iostream>
#include<string>
#include "Referee.h"
#include "Human.h"
#include "Player.h"

using namespace std;
Referee::Referee(){

}
char Referee::refGame(Player* player1, Player* player2){
    char move2=player2->makeMove();
    char move1=player1->makeMove();
        if (player2->makeMove()=='R'&&player1->makeMove()=='R'){
          return 'T';
        }
        if (player2->makeMove()=='R'&&player1->makeMove()=='S'){
            return 'L';
        }
        if (player2->makeMove()=='R'&&player1->makeMove()=='P'){
            return 'W';
        }
        if (player2->makeMove()=='S'&&player1->makeMove()=='R'){
            return 'w';
        }
        if (player2->makeMove()=='S'&&player1->makeMove()=='S'){
            return 'T';
        }
        if (player2->makeMove()=='S'&&player1->makeMove()=='P'){
            return 'L';
        }
          if (player2->makeMove()=='P'&&player1->makeMove()=='R'){
            return 'L';
        }
        if (player2->makeMove()=='P'&&player1->makeMove()=='S'){
            return 'W';
        }
        if (player2->makeMove()=='P'&&player1->makeMove()=='P'){
           return 'T';
        }
    

 
}

