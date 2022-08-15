#include<iostream>
#include<string>
#include "PaperDoll.h"
PaperDoll::PaperDoll(){
    counter =0;
}
char PaperDoll::makeMove(){
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
        return 'S';
        counter++;
        }
        return 'E';
     

}