/*En general, herencia publica significa que una clase 
derivada tiene acceso a los elementos publicos y 
protegidos de su clase base. Los elementos publicos se
heredan como elementos publicos; los elementos protegidos
permanecen protegidos, los elementos privados no se heredan 
class ClaseDerivada : public ClaseBase{
            private:
                //Seccion privada
            public: 
                //Seccion publica
            protected:
                //Seccion:
        }

Tipo de Herencia | Acceso en la clase Base  | Acceso en la clase derivada
    public              public                      public
                        protected                   protected
                        private                     inaccesible*/
#include "Turismo.h"
#include <iostream>
using namespace std;

int main(){
    Turismo *t1 = new Turismo("Toyota", "Rojo", "GH89", 4);

    cout << "Color: " << t1->getColor() << endl;
    t1->setColor("Amarillo");
    cout << "Color: " << t1->getColor() << endl;

    //cout << "Modelo: " << t1->getModelo() << endl no lo puedo usar porque es protegido
    cout << "Modelo: " << t1->retornarModelo() << endl;
    return 0;
};