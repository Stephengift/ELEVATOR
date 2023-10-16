
#ifndef BELL_H
#define BELL_H

#include <iostream>
#include <string>
#include <iomanip>
#include <QString>
#include <QMutex>
#include <QTimer>
#include <QDebug>


using namespace std;
//Bell class that rings when an elevator door opens/closes
class Bell {

    public:
        //constructor
        Bell(int);

        //destructor
        ~Bell();
        
        //ring function
        void ring();
        //getters
        int getId();

    private:
        int id;







};
#endif
