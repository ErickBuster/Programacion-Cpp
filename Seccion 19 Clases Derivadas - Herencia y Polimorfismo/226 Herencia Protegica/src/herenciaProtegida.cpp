/*Herencia Protegida:
        Con herencia protegida, los miembros publicos y protegidos de la 
        clae base se convierten en miembros de la clase derivada y los
        miembros privados de la clase se vueleven inaccesibles


        class ClaseDerivada : protected ClaseBase{
            private:
                //Seccion privada
            public:
                //Seccion publica
            protected:
                //Seccion protected
        };

Tipo de Herencia | Acceso en la clase Base  | Acceso en la clase derivada
    protected           public                      protected
                        protected                   protected
                        private                     inaccesible*/
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"
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
    
    cout << "\t\tHerencia Protegida" << endl;
    Furgoneta *f1 = new Furgoneta("Ford", "Negro", "SAF98", 1500);
    cout << "Carga: " << f1->getCarga() << "Kg" << endl;
    //cout << "Color: " << f1->getColor() << endl << endl; paso de tipo privado
    cout << "Color: " << f1->obtenerColor() << endl << endl;

    delete t1;
    delete d1;
    delete f1;
    return 0;
}
