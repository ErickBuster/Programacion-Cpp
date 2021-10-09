#include <iostream>
using namespace std;

class ClaseBase{
    private:
        int numero;
    public:
        ClaseBase(int numero){
            this->numero = numero;
            cout << "\tConstructor de la Clase Base" << endl;
        }
        ~ClaseBase(){
            cout << "\tDestructor de la Clase Base" << endl << endl;
        };

};