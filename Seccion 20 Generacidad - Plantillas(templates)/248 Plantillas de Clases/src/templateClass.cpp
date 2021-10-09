#include <iostream>
using namespace std;
#include "tempClass.h"

int main(){
    tempClass<int, float> obj1(159, 13.158);
    cout << obj1.getDato1() << endl;
    cout << obj1.getDato2() << endl;

    obj1.setDato1(123.5);
    obj1.setDato2(98.155);

    obj1.mostrarDator();
    return 0;
}