/*        Futbolista
            -dorsal : int
            -posicion : string
            +entrevista() : void
*/
#include <iostream>
using namespace std;
#include "PersonaDatos.h"

class Futbolista : public PersonaDatos{
    //Atributos
    private:
        int dorsal;
        string posicion;
    //Metodos
    public:
        Futbolista(string nombre, string apellido, int edad, 
        int dorsal, string posicion) : PersonaDatos(nombre,apellido, 
        edad){
            this->dorsal = dorsal;
            this->posicion = posicion;
        }
        ~Futbolista(){}
        void partidoFutbol(){
            cout << "Juega el partido de futbol" << endl;
        }
        void entrenamiento(){
            cout << "Entrena" << endl;
        }
        void entrevista(){
            cout << "Da una entrevista" << endl;
        }
};