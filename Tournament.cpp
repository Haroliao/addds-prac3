#include "Tournament.h "
#include "Referee.h"
#include"Player.h"
#include<iostream>
#include<string>
#include <array>
using namespace std;
Tournament::Tournament(){

}
Player *Tournament::match(Player* player1, Player* player2){
    Referee ref;
    int score = 0;
    char result;
    for(int i = 0; i<5; i++){
       result=ref.refGame(player1,player2);
        if(result == 'W'){
            score++;
        }
        else if(result == 'L'){
            score--;
        }
    }
    if(score==0){
        return player1;
    }
    else if(score>0){
        return player1;
    }
    else{
        return player2;
    }

}

Player* Tournament::run(array<Player *, 8>  competitors){
    std::array<Player*, 4> firstwinners;
    std::array<Player*, 2> secondwinners;
    Player* finalwinner;
    int j=0;
    
     for(int i=0; i <8; i=i+2){ 
        firstwinners.at(j) = match(competitors.at(i), competitors.at(i+1));
        j++;
     }
     for (int i=0; i<4; i=i+2){
        secondwinners.at(j)=match(firstwinners.at(i), firstwinners.at(i+1));
        j++;
     }
     finalwinner=match(secondwinners.at(0), secondwinners.at(1));
     return finalwinner;


}

