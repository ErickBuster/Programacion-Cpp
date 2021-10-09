//Herencia Privada
#include <iostream>
using namespace std;
#include "Vehiculo.h"
class Deportivo : private Vehiculo{
    //Atributos
    private:
        int cilindrada;
    //Metodos
    public:
        Deportivo(string marca, string color, string modelo, int cilindrada) : Vehiculo(marca,color,modelo){
            this->cilindrada = cilindrada;
        }
        ~Deportivo(){}
        int getCilindrada(){   return cilindrada;  }
        string reportarMarco(){
            return getMarca();
        }
};