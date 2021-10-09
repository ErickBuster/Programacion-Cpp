// Constructores y Destructores de clases derivadas
#include <iostream>
#include "claseHija.h"
using namespace std;

int main(){
    ClaseDerivada *objeto1 = new ClaseDerivada(5, 10);
    
    delete objeto1;
    return 0;
}