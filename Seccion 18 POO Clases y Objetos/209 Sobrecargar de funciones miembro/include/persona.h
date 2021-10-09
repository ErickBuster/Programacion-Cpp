#include <iostream>
using namespace std;
class Persona{
    //Atributos
    private:
        string nombre;
        int edad;
        string dni;
    //Medotos
    public:
        //sobrecarga de constructores
        // sabra el programa que constructor usar dependiento los parametros que le pasemos
        Persona(string _nombre, int _edad){
            nombre = _nombre;
            edad = _edad;
        }
        Persona(string _dni){
            dni = _dni;
        }
        //Sobrecarga de funciones
        // al tener el mismo nombre de funcion, el compilador reconocera la diferencia
        //al pasarle o no parametros 
        void correr(){
            cout << "Soy " << nombre << ", tengo " << edad 
            << " anio y estoy corriendo un maraton " << endl;
        }
        void correr (int km){
            cout << "Mi dni es: " << dni << endl;
            cout << "He corrido: " << km << " kilometros " << endl;
        }
};