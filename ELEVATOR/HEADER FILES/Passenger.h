
#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
#include <iomanip>

//Passenger  that calls the elevator
using namespace std;

class Passenger {
		
	public:
		//constructor
		Passenger(const string& name, Floorbutton* floorbuttonC);
		
		//destructor
		~Passenger();

		//getters
		Floorbutton* getHelpButton();
		string getName();

		//others
		void press();

	private:
		string name;
		Floorbutton* floorbutton;
	
		
		 
		
	
	
};
#endif