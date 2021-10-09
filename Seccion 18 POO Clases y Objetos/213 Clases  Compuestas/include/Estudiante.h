#include <iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante{
    //Atributos
    private:
        string codigo;
        float promedio;
        //clase compuesta: Objetos que derivan de otras clases
        Expediente exp; // objeto1
        Direccion dir;  // objeto2
    public:
        //inicializando los atributos
        //Constructor de clase compuesta
        Estudiante(string codigo, float promedio, int numero_Expediente, string direccion) : exp(numero_Expediente), dir(direccion){
            this->codigo = codigo;    
            this->promedio = promedio;
        }
        ~Estudiante(){}
        void mostrarDatos(){
            cout << "Codigo: " << codigo << endl;
            cout << "Promedio: " << promedio << endl;
            cout << "Numero expediente: " << exp.getNumeroExpediente() <<endl;
            cout << "Direccion: " << dir.getDireccion() << endl << endl;
        }
};