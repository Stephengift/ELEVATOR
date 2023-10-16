#include "Displayaudio.h"

Displayaudio::Displayaudio(int id){
    this->id = id;
}
QString Displayaudio::warning()
{
    QString warning = "Audio warning message.";
    return warning;
}

//getters
int Displayaudio::getId() { return id; }
