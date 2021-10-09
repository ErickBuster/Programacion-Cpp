    /*Persona - > Clase Abstracta
            #nombre : string # -> protected
            #apellido : string
            #edad :  int
            +Persona(string, string , int)
            +viajar : void
            virtual +partidoFutbool : void
            virtual +entrenamiento : void*/
#ifndef PERSONADATOS_H
#define PERSONADATOS_H
#include <iostream>
using namespace std;
class PersonaDatos{
    //Atributos
    protected:
        string nombre, apellido;
        int edad;
    public:
        PersonaDatos(string nombre, string apellido, int edad){
            this->nombre = nombre;
            this->apellido = apellido;
            this->edad = edad;
        }
        ~PersonaDatos(){}
        void viajar(){
            cout << "Viajar" << endl;
        }
        virtual void partidoFutbol() = 0;
        virtual void entrenamiento() = 0;
        string getNombre(){ return nombre;  }
        string getApellido(){   return apellido; }
        int getEdad(){  return edad;    }
};
#endif