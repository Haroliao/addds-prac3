#include<iostream>
#include<string>
#include "Crescendo.h"
Crescendo::Crescendo(){
    counter =0;
}
char Crescendo::makeMove(){
    //char move;
   if(counter>2){
        counter = 0;
    }
     else if(counter==0){
     return 'P';
     counter++;
     }
     else if(counter==1){
     return 'S';
     counter++;
     }
     else if(counter ==2){
        return 'R';
        counter++;
        }
        return 'E';
     
}