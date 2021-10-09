/*Herencia Privada:
        Con herencia, los miembros publicos y protegidos de la clase base
        se vuelven miembros privados de la clase derivada. En efecto, los 
        usuarios de la clase derivada no tienen acceso a las facilidades
        proporcionadas por la clase base. Los miembros privados de la clase 
        base son inaccesibles a las funciones miembro de la clase derivada.

        class ClaseDerivada : private ClaseBase{
            private:
                //Seccion privada
            public:
                //Seccion publica
            protected:
                //Seccion protected
        };

Tipo de Herencia | Acceso en la clase Base  | Acceso en la clase derivada
    private             public                      private
                        protected                   private
                        private                     inaccesible*/
#include "Turismo.h"
#include "Deportivo.h"
#include <iostream>
using namespace std;

int main(){
    Turismo *t1 = new Turismo("Toyota", "Rojo", "GH89", 4);

    cout << "\t\tHerencia Publica " << endl;
    cout << "Color: " << t1->getColor() << endl;
    t1->setColor("Amarillo");
    cout << "Color: " << t1->getColor() << endl;
    //cout << "Modelo: " << t1->getModelo() << endl no lo puedo usar porque es protegido
    cout << "Modelo: " << t1->retornarModelo() << endl << endl;


    cout << "\t\tHerencia Privada " << endl;
    Deportivo *d1 = new Deportivo("Audi", "Blanco", "FG156D", 8);
    cout << "Cilindrada: " << d1->getCilindrada() << endl;

    /*cout << "Marca: " << d1->getMarca() << endl; al ser herencia privada, no puedo manipular
    lo privado desde los objetos(se vuelve inaccesible), lo cual se crea una funcion en la clase 
    para acceder desde la clase principal lo cual queda*/
    cout << "Marca: " << d1->reportarMarco() << endl << endl;
    


    delete t1;
    delete d1;
    return 0;
}
