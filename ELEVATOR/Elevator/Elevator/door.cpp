#include "Door.h"

//constructor
Door::Door(int id)
{
    this->id = id;
    this->sensor = new Sensor(id);
}

//setting the door to open or close
void Door::setDoorState(bool isOpen)
{
    if(isOpen == true){
        door = "DOOR IS OPENING";
    }else{
        door = "DOOR IS CLOSING";
    };
}

//function for when door is open
void Door::open()
{
    setDoorState(true);
}

//function for when door is close
void Door::close(bool obstacle)
{
    if(sensor->lightInterrupted(obstacle)){
        setDoorState(true);
        qInfo()<<"Closing Door";
        qInfo()<<"Obstacle detected";
    }
    else{
        setDoorState(false);
    }
}


//getter
int Door::getId() { return id; }
