#include <iostream>
using namespace std;

class Personaje{
    friend void modificar(Personaje &, int, int); //es una funcion amiga que le dara permisos para modificar los datos private y protected
    //Atributos
    private:
        int ataque, defensa;
    //Metodos
    public:
        Personaje(int ataque, int defensa){ // Constructor
            this->ataque = ataque;
            this->defensa = defensa;
        }
    void mostrarDatos(){
        cout << "Ataque: " << ataque << endl;
        cout << "Defensa: " << defensa << endl << endl;
    }
};