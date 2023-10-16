#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Floor.h"
#include "Displayaudio.h"
#include "Door.h"
#include "State.h"
#include "Bell.h"
#include <QObject>
#include <QMutex>
#include <QTimer>
#include <QDebug>



using namespace std;



//Elevator class that inherits from the Floor class and gets the door, floornum method...
class Elevator {

    public:
        //constructor
        Elevator(int id, Floor*);
        static const int SAFE_FLOOR = 1;

        //destructor
        ~Elevator();

        //getters and setters
        int getId();
        void moveUp(Floor*, int);
        void moveDown(Floor*, int);
        void moveSafeFloor(Floor*);
        void openDoor();
        void closeDoor(bool);
        void Overload();
        void helpbutton();
        void powerOut(Floor*);
        void fireAlarm(Floor*);
        void Obstacle(bool);
        
      


        //other
        void setState(State);
        Floor* getCurrentElevFloorNum();

       

    private:
        int elevId;
        Floor* currFloorNum;
        bool doorsOpen;
        Door* door;
        State s;
        Bell* bell;




};

#endif //ELEVATOR_H
