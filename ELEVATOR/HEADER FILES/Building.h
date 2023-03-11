
#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;
//The building class for elevators
class Building {
		
	public:
		//constructor
		Building(const string& id);
		
		//destructor
		~Building();
	private:
		string id;
	
		
		 
		
	
};
#endif