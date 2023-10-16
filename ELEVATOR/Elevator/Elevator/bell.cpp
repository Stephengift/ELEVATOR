#include "Bell.h"

//constructor
Bell::Bell(int id){
    this->id = id;
}

//ring function
void Bell::ring()
{
    qInfo()<<"Bell Ring!";
}

//getters
int Bell::getId() { return id; }
