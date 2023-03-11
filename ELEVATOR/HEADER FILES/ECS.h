
#ifndef ECS_H
#define ECS_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//Allocation strategy method. If ecs_id = 1 call strat_A else call strat_B
class ECS {
		
	public:
		//constructor
		ECS(const string& id);
		
		//destructor
		~ECS();


		//others
        void strat_A();
        void strat_B();

	private:
		string id;

	
		
		 
		
	
	
};
#endif