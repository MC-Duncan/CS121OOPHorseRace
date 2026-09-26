#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse(){
  position = 0;
  name = 0;
  trackLength = 15;
} // end constructor

void Horse::init(int index, int trackLen) {
  name = index;
  trackLength = trackLen;
}

void Horse::advance(){
  int coin = rand() % 2;
  position += coin;
} // end advance

void Horse::printLane(){
  for (int pos  = 0; pos < trackLength; pos++){
    if (pos == position){
      std::cout << name;
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
    std::cout << "Horse " << name << " is the winner" << std::endl;
  } // end if
  return result;
} // end isWinner

