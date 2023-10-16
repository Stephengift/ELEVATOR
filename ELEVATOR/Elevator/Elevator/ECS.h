#ifndef ECS_H
#define ECS_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Elevator.h"
#include "Floor.h"


using namespace std;

//Allocation strategy method. If ecs_id = 1 call strat_A else call strat_B
class ECS {

    public:
        //constructor
        ECS();

        //destructor
        ~ECS();

        //getters
        Elevator* getElevators(int);
        Floor* getFloors(int);

        //others
        void addElevator(Elevator*);
        void addFloor(Floor*);
        void moveElevator(int,Floor*,int);
        void callElevator(int, int);

    private:
        int ecsId;
        QList<Elevator*> elevators;
        QList<Floor*> floors;
        Floor* floor;
        State s;







};
#endif
