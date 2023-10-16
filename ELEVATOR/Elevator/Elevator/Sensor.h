#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <QString>


using namespace std;

class Sensor {

    public:
        //constructor
        Sensor(int id);

        //destructor
        ~Sensor();

        //getters
        int getId();

        //others
        bool lightInterrupted(bool);
        
    private:
        int id;


};
#endif
