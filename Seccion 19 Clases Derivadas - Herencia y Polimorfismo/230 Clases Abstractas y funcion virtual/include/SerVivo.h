#ifndef SERVIVO_H
#define SERVIVO_H
#include <iostream>
using namespace std;

class SerVivo{
    public:
    //Asi se asigna la funcion virtual
    //Lo cual se vuelve una clase Abstracta
    virtual void alimentarse() = 0;
};

#endif