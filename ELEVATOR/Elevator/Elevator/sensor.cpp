#include "Sensor.h"

Sensor::Sensor(int id)
{
    this->id = id;
}
//Checks if there is an obstacle (represented as a boolean) that blocks the door sensor while the door is closing
bool Sensor::lightInterrupted(bool obstacle)
{
    if (obstacle == true){
        return true;
    }
    else{
        return false;
    }
}


int Sensor::getId() { return id; }
