#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
using namespace std;
/*Alumno
    -NombreDeLaCarrera : string
    virtual +Alumno(string)
    +mostrarDatos() : void //es diferente
    +setNombreCarrera(string) : void
    +getNombreCarrera(string) : string*/
class Alumno{
    //Atributos
    private:
        string nombreCarrera;
    //Metodos
    public:
        Alumno(string nombreCarrera){   this->nombreCarrera = nombreCarrera;    }
        void mostrarDatos(){
            cout << "Nombre de la Carrera: " << nombreCarrera << endl;
        }
        ~Alumno(){}
        void setNombreCarrera(string nombre){   nombreCarrera = nombre; }
        string getNombreCarrera(){  return nombreCarrera;   }  
};
#endif