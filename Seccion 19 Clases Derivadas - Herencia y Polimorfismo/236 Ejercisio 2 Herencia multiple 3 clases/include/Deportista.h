#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include <iostream>
using namespace std;
/*Deportista
    -entrenador : string
    +Deportista(string)
    +mostrarDatos() : void //es diferente
    +setNombreEntrenador(string) : void
    +getNombreEntrenador() : string
*/
class Deportista{
    //Atributos
    private:
        string nombreEntrenador;
    //Metodos
    public:
        Deportista(string nombreEntrenador){    this->nombreEntrenador = nombreEntrenador;  }
        void mostrarDatos(){
            cout << "Nombre del entrenador: " << nombreEntrenador << endl;
        }
        ~Deportista(){}
        void setNombreEntrenador(string nombre){    this->nombreEntrenador = nombre;    }
        string getNombreEntrenador(){   return nombreEntrenador;    }
};
#endif