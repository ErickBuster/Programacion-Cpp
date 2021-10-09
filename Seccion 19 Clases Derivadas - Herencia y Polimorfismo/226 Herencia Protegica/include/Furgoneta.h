// Herencia Protegida
#include <iostream>
using namespace std;
#include "Vehiculo.h"

class Furgoneta : protected Vehiculo{
    //Atributos
    private:
        int carga;
    //Metodos
    public:
        Furgoneta(string marca, string color, string modelo, int carga) : Vehiculo(marca,color,modelo){
            this->carga = carga;
        }
        ~Furgoneta(){}
        int getCarga(){ return carga;   }
        string obtenerColor(){  return getColor(); }
};