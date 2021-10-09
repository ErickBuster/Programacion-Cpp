#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Materia{
    string nombreMateria;
    int clave;
    T calificacion;
    //Metodos
    public:
        Materia(string nombreMateria, int clave, T calificacion){
            this->nombreMateria = nombreMateria;
            this->clave = clave;
            this->calificacion = calificacion;
        }
        void mostrarDatos(){
            cout << left;
            cout << setw(14) << "Materia: " << setw(2) << nombreMateria << endl;
            cout << setw(14) << "Clave: " << setw(2) << clave << endl;
            cout << setw(14) << "Calificacion: " << setw(2) << calificacion << endl << endl;
        }
        void setCalificacion(T calificacion){
            this->calificacion = calificacion;
        }
        T getCalificacion(){    return calificacion;    }
};