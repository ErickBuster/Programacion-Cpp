#ifndef FELINO_H
#define FELINO_H
#include "Mamifero.h"
class Felino : public Mamifero{
    //Atributos
    private:
        string nombreCirco;
    //Metodos
    public:
        Felino(int anioNacimiento, string lugarNacimiento,
        string raza, string nombreCirco) : Mamifero(anioNacimiento,
        lugarNacimiento,raza){
            this->nombreCirco = nombreCirco;
        }
        Felino(int anioNacimiento, string lugarNacimiento,
        string raza) : Mamifero(anioNacimiento,lugarNacimiento,raza){}
        ~Felino(){}
        string imprimirDieta(){
            return "La dieta del felino es a base de carne";
        }
        void setNombreCirco(string nombre){ this->nombreCirco = nombre;  }
        string getNombreCirco(){    return nombreCirco; }
};
#endif