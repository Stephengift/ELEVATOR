
#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Floor.h"


using namespace std;


//Elevator class that inherits from the Floor class and gets the door, floornum method...
class Elevator {
		
	public:
		//constructor
		Elevator(const string& id, Floor* floorC);
		
		//destructor
		~Elevator();

        //getters and setters
        string getId();
        Floor* getArrives();
        Floor* getopenDoor();
        Floor* getcloseDoor();
        Floor* getFloorNum();
        

		//other
        int currentFloor(Floor*);
	
	private:
		string id;
		Floor* floor;

		
		 
		
	
};
#endif