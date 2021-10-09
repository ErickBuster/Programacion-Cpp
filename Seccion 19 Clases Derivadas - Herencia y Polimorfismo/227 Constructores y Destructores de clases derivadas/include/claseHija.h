#include <iostream>
#include "ClaseBase.h"
using namespace std;

class ClaseDerivada : public ClaseBase{
    private:
        int numero2;
    public:
        ClaseDerivada(int numero, int numero2) : ClaseBase(numero){
            this->numero2 = numero2;
            cout << "\tConstructor de la Clase Derivada o Hija" << endl << endl;
        }
        ~ClaseDerivada(){
            cout << "\tDestructor de la clase Derivada o Hija" << endl;
        }
};