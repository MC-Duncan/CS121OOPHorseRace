//race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		int NUM_HORSES
		int TRACK_LENGTH
		Horse horses[NUM_HORSES]
	public:
		Race();
		void start();
}; // end class def

#endif
