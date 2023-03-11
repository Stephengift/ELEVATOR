
#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Sensor {
		
	public:
		//constructor
		Sensor(const string& id);
		
		//destructor
		~Sensor();

		//getters
		string getId();

		//others
		boolean notify();

	private:
		string id;	
	
	
};
#endif