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
    
     for(int i=0; i<4; i++){ 
        firstwinners.at(i) = match(competitors.at(2*i), competitors.at(2*i+1));
     }
     for (int i=0; i<2; i++){
        secondwinners.at(i)=match(firstwinners.at(2*i), firstwinners.at(2*i+1));
     }
     finalwinner=match(secondwinners.at(0), secondwinners.at(1));
     return finalwinner;


}

