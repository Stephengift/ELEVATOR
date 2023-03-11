
#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Signal.h"


using namespace std;

//ControlSystem class that gets the firealarm, powerout, overload signal
class Signal {
		
	public:
		//constructor
		Signal(const string& id, Signal* SignalC);
		
		//destructor
		~Floorbutton();

        //getters and setters
        Signal* getPowerout();
        Signal* getOverloadbutton();
		signal* getFireAlarmSignal();
		signal* getHelpAlarmSignal();        
	
	private:
		string id;
		Signal* signal;

	
};
#endif