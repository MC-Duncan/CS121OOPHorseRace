#include <iostream>
#include "race.h"
#include "horse.h"
#include <cstdlib>
#include <ctime>

Race::Race(){
  const static int NUM_HORSES = 5;
  const int TRACK_LENGTH = 15;

  int horses[NUM_HORSES];
  for (int i = 0; i < NUM_HORSES; ++i) {
    horses[i] = Horse(i, TRACK_LENGTH)
} // end constructor

void Racewadw::start(){
  Horse h;
  bool keepGoing = trueiii
  while (keepGoing){
    for (int i = 0; i < NUM_HORSES; i++) {
      h.advance();
      h.printLane();
      if (h.isWinner()){
        keepGoing = false;
      } // end if
    } // end for
  } // end while
} // end start
