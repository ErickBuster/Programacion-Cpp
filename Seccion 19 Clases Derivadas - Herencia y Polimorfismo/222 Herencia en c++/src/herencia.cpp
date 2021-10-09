#include <iostream>
#include "triangulo.h"
using namespace std;

int main(){
    Triangulo *t1 = new Triangulo(3, 3, 4, 5);

    cout << "Numero de lados: " << t1->getNumeroLados() << endl;
    cout << "Area triangulo: " << t1->areaTriangulo() << endl << endl;
    return 0;
}