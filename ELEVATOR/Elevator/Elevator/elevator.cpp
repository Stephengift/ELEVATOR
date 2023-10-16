#include "Elevator.h"

//constructor
Elevator :: Elevator(int id, Floor* currentFloor){
    this->elevId = id;
    this->s = idle;
    this->currFloorNum = currentFloor;
    this->door = new Door(id);

}

//setting the elevator state
void Elevator :: setState(State state){
    this->s = state;
}

//getting the elevator
int Elevator :: getId(){
    return elevId;
}

Floor* Elevator :: getCurrentElevFloorNum(){
    return currFloorNum;
}

//open door when elevator arrives
void Elevator :: openDoor(){
    door->open();
    qInfo()<< "OPENING DOOR FOR 10 SECONDS";
}

//closing door when elevator leaves
void Elevator :: closeDoor(bool obstacle){
    door->close(obstacle);
    openDoor();
}

//moving elevator to safe floor = 1
void Elevator :: moveSafeFloor(Floor* fNum){
    int floorNum = fNum->getFloornumber();
    for(int i=floorNum; i> 0 && i>= SAFE_FLOOR; i--){
        qInfo()<< "AT FLOOR"<< i;
    }
    qInfo()<< "ARRIVED AT FLOOR" << SAFE_FLOOR;
    bell->ring();
    openDoor();


}

//overload button is pressed
void Elevator :: Overload(){
    switch(this->s){
        case overload:
            qInfo()<< "ELEVATOR WEIGHT IS OVERLOAD, PLEASE REDUCE CARGO LOAD";
            openDoor();
            break;
        default:
            qInfo()<< "invalid overweight";
            break;
    }
}

//obstacle button is pressed
void Elevator :: Obstacle(bool obstacle){
    switch(this->s){
        case normal:
            if(obstacle == true){

            }
            qInfo()<< "LIGHT SENSOR IS INTERRUPTED WHEN DOOR IS CLOSING";
            openDoor();
            break;
        default:
            qInfo()<< "invalid overweight";
            break;
    }
}

//help button is pressed
void Elevator :: helpbutton(){
    switch(this->s){
        case help:
        //POWER OUT BUTTON HAS BEEN PRESSED
            qInfo()<< "HELP BUTTON HAS BEEN PRESSED, CONNECTING TO 911";
            break;
        default:
            qInfo()<< "Invalid help";
            break;
    }
}

//powerOut button is pressed
void Elevator :: powerOut(Floor* fNum){
    switch(this->s){
        case powerout:
            qInfo()<< "POWER OUT BUTTON HAS BEEN PRESSED";
            moveSafeFloor(fNum);
            break;
        default:
            qInfo()<< "Invalid powerout";
            break;
    }
}

//firealarm button is pressed
void Elevator :: fireAlarm(Floor* fNum){
    switch(this->s){
        case fire:
            qInfo()<< "FIRE ALARM BUTTON HAS BEEN PRESSED";
            moveSafeFloor(fNum);
            break;
        default:
            qInfo()<< "Invalid fire";
            break;
    }
}
   
//closing door



//moving from floor 1 to floor 5;
void Elevator :: moveUp(Floor* fNum, int toFloor){
    qInfo()<< "ELEVATOR IS MOVING UP";
    int currentFloor = fNum->getFloornumber();
    switch(this->s){
        case idle:
           //currentFloor =  toFloor;
           setState(normal);
        case normal:
            //qInfo()<< "At floor"<<currentFloor;
            for(int i=currentFloor; i< toFloor; i++){
                qInfo()<< "AT FLOOR" << i;
            }
            qInfo()<< "ARRIVED AT FLOOR" <<toFloor;
            bell->ring();
            openDoor();
            break;
        case powerout:
            powerOut(fNum);
            break;
        case fire:
            fireAlarm(fNum);
            break;
        default:
            qInfo()<< "Invalid";
            break;
    }
}
// movedown from 4 to 2;
//fnum = 4, tofloor = 2

void Elevator :: moveDown(Floor* fNum, int toFloor){
    qInfo()<< "ELEVATOR IS MOVING DOWN";
    int currentFloor = fNum->getFloornumber();
    switch(this->s){
        case idle:
           //currentFloor =  toFloor;
           setState(normal);
        case normal:
            for(int i=currentFloor; i>toFloor; i--){
                qInfo()<< "AT FLOOR"<<i;
            }
            qInfo()<< "ARRIVED AT FLOOR" <<toFloor<< "FOR 10SECONDS";
            bell->ring();
            openDoor();
            break;
        case powerout:
            powerOut(fNum);
            break;
        case fire:
            fireAlarm(fNum);
            break;
        default:
            qInfo()<< "Invalid";
            break;
    }

}


