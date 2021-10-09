#include <iostream>
#include "Barco.h"
#include "Avion.h"

class HidroAvion : public Barco, public Avion{
    //Atributos
    private:
        string codigo;
    public:
        HidroAvion(string nombre, string modelo, string codigo) : Barco(nombre) , Avion(modelo){
            this->codigo = codigo;
        }
        ~HidroAvion(){}
        string getCodigo(){ return codigo;  }
        void mostrarDatos(){
            cout << "Nombre: " << getNombre() << endl; //funciones heredadas
            cout << "Modelo: " << getModelo() << endl;  //funciones heredadas
            cout << "Codigo: " << codigo << endl << endl;   //atributo de la misma clase
        }
};