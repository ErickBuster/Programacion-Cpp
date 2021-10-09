#ifndef MAMIFERO_H
#define MAMIFERO_H
#include <iostream>
using namespace std;
class Mamifero{
    //Atributos
    private:
        int anioNacimiento;
        string lugarNacimiento, raza;
    public:
        Mamifero(int anioNacimiento, string lugarNacimiento, string raza){
            this->anioNacimiento = anioNacimiento;
            this->lugarNacimiento = lugarNacimiento;
            this->raza =raza;
        }
        ~Mamifero(){}
        virtual string imprimirDieta() = 0;
        int getAnioNacimiento(){   return anioNacimiento;  }
        string getLugarNacimiento(){    return lugarNacimiento; }
        string getRaza(){   return raza;    }

};
#endif