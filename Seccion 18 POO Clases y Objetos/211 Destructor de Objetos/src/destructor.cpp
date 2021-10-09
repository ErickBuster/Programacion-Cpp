// Destructor de objetos
#include <iostream>
#include "classPerro.h"
using namespace std;

int main(){
    //Objeto de forma estatica
    Perro perro1("Drako","Alaska Malamute");
    perro1.mostrarDatos();
    perro1.jugar();

    cout << endl;

    Perro *perro2 = new Perro("Chaparro" , "chihuahua");
    perro2->mostrarDatos();
    perro2->jugar();

    
    delete perro2;
    return 0;
}