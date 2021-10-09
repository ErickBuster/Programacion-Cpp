#include <iostream>
#include "classPerro.h"
using namespace std;

void Perro::mostrarDatos(){
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
}
void Perro::jugar(){
    cout << nombre << " esta jugando con la pelota " << endl;
}