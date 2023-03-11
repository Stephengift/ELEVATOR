
#ifndef BELL_H
#define BELL_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;
//Bell class that rings when an elevator door opens/closes
class Bell {
		
	public:
		//constructor
		Bell(const string& id);
		
		//destructor
		~Bell();

		//getters
		string getId();

	private:
		string id;
		
	
		
		 
		
	
	
};
#endif