
#ifndef FLOORBUTTON_H
#define FLOORBUTTON_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Floor.h"


using namespace std;


//The other floor class that the elevator will eventually end up commuting to
class Otherfloors {
		
	public:
		//constructor
		Otherfloors(const string& id, Floor* floorC);
		
		//destructor
		~Otherfloors();

        //getters and setters
        string getDirection();
        int floorRequest(Floor*, string direction);
        

		//other
        void inform();
	
	private:
		string id;
        string direction;
        Floor* floors;

		
		 
		
	
};
#endif