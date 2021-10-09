#include <iostream>
using namespace std;

class Barco{
    //Atributos
    private:
    //Metodos
        string nombre;
    public:
        Barco(string nombre){   this->nombre = nombre;  }
        ~Barco(){}
        void indicarBarco(){
            cout << "Desplazamiento por agua " << endl;
        }
        string getNombre(){ return nombre;  }
};
