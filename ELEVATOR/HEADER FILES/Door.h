
#ifndef DOOR_H
#define DOOR_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//Door class for an elevator that stores the time it takes for an elevator to open, sets the id for the door and gets the number
class Door {
		
	public:
		//constructor
		Door(const string& id);
		
		//destructor
		~Door();

		//getters
		string getId();
        int getNumber();
        int setTime();


		//others
		boolean setLightInterrupted();
        void ring();

	private:
		string id;
		int number;
        int time;

	
		
		 
		
	
	
};
#endif