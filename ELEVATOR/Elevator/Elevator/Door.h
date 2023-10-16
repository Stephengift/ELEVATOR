#ifndef DOOR_H
#define DOOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <QString>
#include <Sensor.h>
#include <QObject>
#include <QMutex>
#include <QTimer>
#include <QDebug>
using namespace std;

//Door class for an elevator that stores the time it takes for an elevator to open, sets the id for the door and gets the number
class Door {

    public:
        //constructor
        Door(int id);

        //destructor
        ~Door();

        //getters
        int getId();

        //others
        void open();
        void close(bool);
        void setDoorState(bool);

    private:
        int id;
        QString door;
        Sensor* sensor;


};
#endif
