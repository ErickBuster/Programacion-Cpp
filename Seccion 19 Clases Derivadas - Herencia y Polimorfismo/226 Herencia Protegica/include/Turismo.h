//Herencia Publica
#include <iostream>
using namespace std;
#include "Vehiculo.h"

class Turismo : public Vehiculo{ // : Vehiculo (sin especificar el tipo, lo colocara como privada como private: Vehiculo)
    private:
        int numeroPuertas;
    public:
        Turismo(string marca, string color, string modelo, int numeroPuertas) : Vehiculo(marca, color, modelo){
            this->numeroPuertas = numeroPuertas;
        }
        ~Turismo(){}
        
        int getNumeroPuertas(){    return numeroPuertas;   }
        string retornarModelo(){ //Funcion para usar los metodos protegidos de la clase base
            return getModelo();
        }
};