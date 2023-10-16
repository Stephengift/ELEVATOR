#ifndef DISPLAYAUDIO_H
#define DISPLAYAUDIO_H

#include <iostream>
#include <string>
#include <iomanip>
#include <QString>

using namespace std;

//display audio that displays the warning
class Displayaudio {

    public:
        //constructor
        Displayaudio(int id);

        //destructor
        ~Displayaudio();

        //getters
        int getId();
        QString warning();


    private:
        int id;







};
#endif
