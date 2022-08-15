#include<iostream>
#include<string>
#include "FistfullODollars.h"
FistfullODollars::FistfullODollars(){
    counter =0;
}
char FistfullODollars::makeMove(){
    //char move;
    if(counter>2){
        counter = 0;
    }
     else if(counter==0){
     return 'R';
     counter++;
     }
     else if(counter==1){
     return 'P';
     counter++;
     }
     else if(counter ==2){
        return 'P';
        counter++;
        }
        return 'E';
     
}