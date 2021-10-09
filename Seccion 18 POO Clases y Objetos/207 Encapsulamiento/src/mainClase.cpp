//Creacion de objetos
// Visibilidad de los miembros de la clase (ENCAPSULAMIENTO)
#include <iostream>
#include "declaracionClase.h"
using namespace std;

int main(int argc, const char * argv[]){
    //Creando un objeto de forma estatica
    PlanoCartesiano coordenada(1, 2, 3); // Creacion de un objeto estatico
    
    cout << "Valor x: " << coordenada.getX() << endl;
    cout << "Valor y: " << coordenada.getY() << endl;
    cout << "Valor z: " << coordenada.getZ() << endl << endl;
    // modificando valores publicas
    coordenada.z = 30; // lo cual si puedo modificar su contenido ya que es de tipo publica
    //coordenada.x = 100; en este caso no puedo modificar su valor porque es de tipo privado y necesito un constructor para modificar
    // usando el constructor para modificar los valores de X y Y
    coordenada.setX(10);
    coordenada.setY(20);
    cout << "Valor x: " << coordenada.getX() << endl;
    cout << "Valor y: " << coordenada.getY() << endl;
    cout << "Valor z: " << coordenada.getZ() << endl << endl;

    //Creando de un objeto de forma dinamica
    PlanoCartesiano *coordenada2 = new PlanoCartesiano(); // objeto puntero 

    cout << "Valor x2: " << coordenada2->getX() << endl;
    cout << "Valor y2: " << coordenada2->getY() << endl;
    cout << "Valor z2: " << coordenada2->getZ() << endl << endl;

    coordenada2->setX(70);
    coordenada2->setY(90);
    coordenada2->setZ(110);

    cout << "Valor x2: " << coordenada2->getX() << endl;
    cout << "Valor y2: " << coordenada2->getY() << endl;
    cout << "Valor z2: " << coordenada2->getZ() << endl << endl;
    
    coordenada2->z = 5000;
    cout << "Valor z2: " << coordenada2->getZ() << endl << endl;
    //eliminando el puntero dinamico
    delete coordenada2;

    return 0;
}