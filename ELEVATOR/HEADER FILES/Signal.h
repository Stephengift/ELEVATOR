
#ifndef SIGNAL_H
#define SIGNAL_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Floorbutton.h"


using namespace std;
//ControlSystem class that gets the helpsignal from the Floorbutton class and sets the helpbuttonsignal, firealarm, powerout, overload signal

class Signal {
		
	public:
		//constructor
		Signal(const string& id, Floorbutton* FloorbuttonC);
		
		//destructor
		~Floorbutton();

        //getters and setters
        boolean setPowerout();
        boolean setOverloadbutton();
		boolean setFireAlarmSignal();
        Floorbutton* getHelpbutton();
		boolean setHelpAlarmSignal();
		string setWarning();
		string getWarning();
        
	
	private:
		string id;
		Floorbutton* floorbutton;
		string warning();

		
		 
		
	
};
#endif