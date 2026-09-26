#include <iostream>
#include "race.h"
#include "horse.h"
#include <cstdlib>
#include <ctime>

Race::Race(){  
  TRACK_LENGTH = 15;
  // random generator already seeded in main
  for (int i = 0; i < NUM_HORSES; ++i) {
    horses[i] = Horse();
    horses[i].init(i, TRACK_LENGTH);
  } // end for
} // end constructor

void Race::start(){
  bool keepGoing = true;
  while (keepGoing){
    for (int i = 0; i < NUM_HORSES; i++) {
      horses[i].advance();
      horses[i].printLane();
      if (horses[i].isWinner()){
        keepGoing = false;
      } // end if
    } // end for
    std::cout << "End of turn" << std::endl;
  } // end while
} // end start
