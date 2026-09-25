#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"

void testHorse();

int main(){
  srand(time(NULL));
  std::cout << "Race Game" << std::endl;
  testHorse();
  
  return 0;
} // end main

void testHorse(){
  Horse h;
  bool keepGoing = true;
  while (keepGoing){
    h.advance();
    h.printLane();
    if (h.isWinner()){
      keepGoing = false;
    } // end if
  } // end for
} // end testHorse
