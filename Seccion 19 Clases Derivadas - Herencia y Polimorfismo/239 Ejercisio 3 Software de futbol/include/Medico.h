/*        Medico
            -titulacion : string
            -aniosExperiencia : int
            +curarLesion() : void*/
#include "PersonaDatos.h"
class Medico : public PersonaDatos{
    //Atributos
    private:
        string titulacion;
        int aniosExperiencia;
    //Metodos
    public:
        Medico(string nombre, string apellido, int edad, 
        string titulacion, int aniosExperiencia) : PersonaDatos(nombre,apellido, 
        edad){
            this->titulacion = titulacion;
            this->aniosExperiencia = aniosExperiencia;
        }
        ~Medico(){}
        void partidoFutbol(){
            cout << "Da asistencia en el partido de futbol" << endl;
        }
        void entrenamiento(){
            cout << "Da asistencia en el entrenamiento" << endl;
        }
        void curarLesion(){
            cout << "Cura lesiones" << endl;
        }
};