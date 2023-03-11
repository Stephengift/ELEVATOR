
#ifndef FLOOR_H
#define FLOOR_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Floor {
		
	public:
		//constructor
		Floor(const string& id);
		
		//destructor
		~Floor();

        //getters and setters
        string getId();
        int floorNum();
        string direction();
        

		//other
        bool illuminate()

		void notify();
		void openDoor();
		void closeDoor();
        int floorRequest(int floorNumber, string direction);
	
	private:
		string id;
		static const char upButton = 'U';
        static const char downButton = 'D';
        int floorNumber;
        string direction;

		
		 
		
	
};
#endif