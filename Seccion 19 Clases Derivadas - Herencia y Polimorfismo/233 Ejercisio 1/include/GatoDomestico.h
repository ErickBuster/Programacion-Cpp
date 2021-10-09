#include "Felino.h"
class GatoDomestico : public Felino{
    //Atributos
    private:
        string nombreDuenio;
    //Metodos
    public:
        GatoDomestico(int anioNacimiento, string lugarNacimiento,
        string raza, string nombreDuenio) : Felino(anioNacimiento,lugarNacimiento,raza){
            this->nombreDuenio = nombreDuenio;
        }
        ~GatoDomestico(){}
        string imprimirDieta(){
            return "La dieta del gato es a base de croquetas";
        }
        void setNombreDuenio(string nombre){
            this->nombreDuenio = nombre;
        }
        string getNombreDuenio(){   return nombreDuenio;    }
};
