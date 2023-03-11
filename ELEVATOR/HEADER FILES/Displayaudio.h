
#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Floor.h"

using namespace std;

//display audio that displays the warning
class Displayaudio {
		
	public:
		//constructor
		Displayaudio(const string& id, Floor* floorC);
		
		//destructor
		~Displayaudio();

		//getters
		string getId();
        Floor* getFloorNum();

	private:
		string id;
		
	
		
		 
		
	
	
};
#endif