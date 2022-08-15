#include<iostream>
#include<string>
#include "Human.h"
#include "Player.h"

Human::Human(){

}
char Human::makeMove(){
      std::cout<<"Enter move:";
      std::cin>>move;
   return move;
}