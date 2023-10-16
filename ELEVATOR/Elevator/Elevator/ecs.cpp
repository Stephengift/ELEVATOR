#include "ECS.h"

ECS :: ECS(){
    //this->ecsId = id;
    //this->elevators = elevs;
}

//function to add elevator
void ECS :: addElevator(Elevator* elev){
    elevators.append(elev);
}

//function to add floor
void ECS :: addFloor(Floor* fl){
    floors.append(fl);
}

//function to get elevator
Elevator* ECS :: getElevators(int id) {
    return elevators.value(id, nullptr);
}

//function to get floor
Floor* ECS :: getFloors(int id) {
    return floors.value(id, nullptr);
}


//KEEP THE List of elevators and floors
//check error handling to make sure they can't move to an illegal floor
//A list of all elevators, and when I want to do anything. I should call


//write a function that moves the elevator using the moveup and movedown function in elevator class
void ECS :: moveElevator(int eId, Floor* currFloor, int toFloor){
    //Floor* fl = getFloors(currFloor);
    Elevator* elev = new Elevator(eId, currFloor);
    int currFloorNum = currFloor->getFloornumber();
    //qInfo()<< "Elevator"<< elev;
    if(currFloorNum == toFloor){
        cout <<"ELEVATOR IS ALREADY AT FLOOR";
    }
    if(currFloorNum < toFloor){
        elev->moveUp(currFloor,toFloor);
    }
    if(currFloorNum > toFloor){
        elev->moveDown(currFloor,toFloor);
    }
    //return currFloor->getFloors
}

//2 to 5
//write a function that calls an idle Elevator
void ECS :: callElevator(int currFloor, int toFloor){
    Elevator* idleElevator = nullptr;
    int minD = -1;
    switch(this->s){
        case idle:
            for (Elevator* elev : elevators){
                int closestDistance = (elev->getCurrentElevFloorNum()->getFloornumber()) - currFloor;
                if (closestDistance <= minD){
                    minD = closestDistance;
                    idleElevator = elev;
                }
            }
            break;
        case normal:
            if(idleElevator != nullptr){
               // moveElevator(idleElevator->getId(),currFloor,toFloor);
            }
            break;
        default:
            cout <<"Invalid state";
            break;
    }
}

