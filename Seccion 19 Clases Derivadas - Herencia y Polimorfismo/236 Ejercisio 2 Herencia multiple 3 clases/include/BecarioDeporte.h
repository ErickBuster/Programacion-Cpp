#include "Alumno.h"
#include "Deportista.h"
/*    BecadoDeportista(Hereda a las 2 clases)
    beca : float
    +BecadoDeportista(string, string, float)
    +mostrarDatos() : void
    +setMontoBeca(float) : void
    +getMontoBeca() : float*/
class BecarioDeporte : public Alumno, public Deportista{
    //Atributos
    private:
        float montoBeca;
    //Metodos
    public:
        BecarioDeporte(string nombreCarrera, string nombreEntrenador, 
        float montoBeca) : Alumno(nombreCarrera) , Deportista(nombreEntrenador){
            this->montoBeca = montoBeca;
        }
        ~BecarioDeporte(){}
        void mostrarDatos(){
            Alumno::mostrarDatos();
            Deportista::mostrarDatos();
            cout << "Monto de la beca: " << montoBeca << endl << endl;
        }
        void setMontoBeca(float monto){ montoBeca += (montoBeca * monto)/100;  }
        float getMontoBeca(){   return montoBeca;   }
};