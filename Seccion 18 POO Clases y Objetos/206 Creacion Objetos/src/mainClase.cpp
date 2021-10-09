//Creacion de objetos
#include <iostream>
#include "declaracionClase.h"
using namespace std;

int main(int argc, const char * argv[]){
    //Creando un objeto de forma estatica
    PlanoCartesiano coordenada(1, 5); // Creacion de un objeto estatico
    cout << "Valor x: " << coordenada.getX() << endl;
    cout << "Valor y: " << coordenada.getY() << endl;

    //Creando de un objeto de forma dinamica
    PlanoCartesiano *coordenada2 = new PlanoCartesiano();
    cout << "Valor x2: " << coordenada2->getX() << endl;
    cout << "Valor y2: " << coordenada2->getY() << endl;

    coordenada2->setX(10);
    coordenada2->setY(20);

    cout << "Valor x2: " << coordenada2->getX() << endl;
    cout << "Valor y2: " << coordenada2->getY() << endl;

    delete coordenada2;

    return 0;
}