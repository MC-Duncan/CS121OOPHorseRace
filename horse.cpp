#include <iostream>
#include "critter.h"

Horse::Horse(){
  Horse::position = 0;
  Horse::index = 0;
  Horse::trackLength = 15;
} // end constructor

void Horse::init(int index, int trackLength){
  Horse::position = 0
  Horse::index = index
  Horse::trackLength = trackLength
} // end init

void Horse::advance(){
  int coin = rand() % 2;
  position += coin;
} // end advance

void Horse::printLane(){
  for (int i = 0, i < trackLength; i++){
    if (i == Horse::position){
      std::cout << Horse::index;
    } else{
      std::cout << ".";
    } // end if
  } // end for loop
  // print a new line
  std::cout << std::endl;
} // end printLane

bool Horse::isWinner(){
  bool result = false;
  if (position >= trackLength){
    result = true
    std::cout << "Horse " << Horse::index << " is the winner" << std::endl;
  } // end if
  return result;
} // end isWinner
