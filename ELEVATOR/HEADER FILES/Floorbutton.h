
#ifndef FLOORBUTTON_H
#define FLOORBUTTON_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Floor.h"


using namespace std;
//The floorbuttonclass of the elevator that has the helpbutton, the floornum....
class Floorbutton {
		
	public:
		//constructor
		Floorbutton(const string& id, Floor* floorC);
		
		//destructor
		~Floorbutton();

        //getters and setters
        Floor* getArrives();
        Floor* getopenDoor();
        Floor* getcloseDoor();
        Floor* getFloorNum();
        boolean setHelpButton();
        

		//other
        void inform();
	
	private:
		string id;
        boolean helpButton;
		Floor* floor;

		
		 
		
	
};
#endif