#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse(){
  position = 0;
  index = 0;
  trackLength = 15;
} // end constructor

void Horse::advance(){
  int coin = rand() % 2;
  position += coin;
} // end advance

void Horse::printLane(){
  for (int pos  = 0; pos < trackLength; pos++){
    if (pos == Horse::position){
      std::cout << Horse::index;
    } else {
      std::cout << ".";
    } // end if
  } // end for loop
  // print a new line
  std::cout << std::endl;
} // end printLane

bool Horse::isWinner(){
  bool result = false;
  if (position >= trackLength){
    result = true;
    std::cout << "Horse " << index << " is the winner" << std::endl;
  } // end if
  return result;
} // end isWinner
