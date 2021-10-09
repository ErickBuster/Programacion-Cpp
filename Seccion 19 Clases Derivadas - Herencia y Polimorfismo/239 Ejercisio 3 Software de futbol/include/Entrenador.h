/*        Entrenador
            -estrategia : string
            +planificarEntrenamiento() : void
*/
#include <iostream>
#include "PersonaDatos.h"
using namespace std;

class Entrenador : public PersonaDatos{
    //Atributos
    private:
        string estrategia;
    //Metodos
    public:
        Entrenador(string nombre, string apellido, int edad, 
        string estrategia) : PersonaDatos(nombre,apellido, 
        edad){
            this->estrategia = estrategia;
        }
        ~Entrenador(){}
        void partidoFutbol(){
            cout << "Dirige a sus jugadores en el partido de futbol" << endl;
        }
        void entrenamiento(){
            cout << "Dirige el entrenamiento" << endl;
        }
        void planificarEntrenamiento(){
            cout << "Esta planificando el entrenamiento" << endl;
        }
        
};