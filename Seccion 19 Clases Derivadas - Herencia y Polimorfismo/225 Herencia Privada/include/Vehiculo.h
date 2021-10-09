//Guardian de inclusion multiple
#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;
class Vehiculo{
    private:
        string marca;
        string color;
    protected:
        string modelo;
        string getModelo(){ return modelo;  }
    public:
        Vehiculo(string marca, string color, string modelo){
            this->marca = marca;
            this->color = color;
            this->modelo = modelo;
        }
        ~Vehiculo(){}
        void setColor(string autoColor){
            this->color = autoColor;
        }
        string getMarca(){  return marca;   }
        string getColor(){  return color;   }
        
};
#endif