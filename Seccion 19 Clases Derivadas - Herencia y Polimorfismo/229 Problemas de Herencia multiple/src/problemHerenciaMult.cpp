/*Caracteristicas de la herencia multiple
    -plantea diferentes problemas tales como la ambiguedad 
    por el uso de nombres identicos en diferentes clases base
    -Los problemas que se pueden presentar cuando se diseñan
    clases con herencia multiple son:
        -colisiones de nombres de diferentes clases base(dos o mas 
        clases base tiene el mismo identificador para algun 
        elemento de su interfaz. Se resuelve con el operador de
        ambito ::)
        -Hernecia repetida de una misma clase base(una clase puede 
        heredar indirectamente dos copias de una clase base
        Se resuelve con el operador de resolucion ambito ::)
*/
#include <iostream>
#include "ClaseDerivada.h"
using namespace std;

int main(){
    Derivada *d1 = new Derivada(1, 2, 3);

    cout << "X: " << d1->getX() << endl;

    delete d1;
    return 0;
}