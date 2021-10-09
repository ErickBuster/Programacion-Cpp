// Miembros static de una clase
#include <iostream>
#include "Estatico.h"
using namespace std;

int main(){
    //Atributo static como va cambiando su valor
    Estatico *objeto1 = new Estatico();
    Estatico *objeto2 = new Estatico();
    Estatico *objeto4 = new Estatico();

    /*En este caso mostrara un valor de 3 ya que el atributo
    no pertenece al objeto si no a la clase, lo cual si se modifica
    el atributo static, se modificara para todos los objetos*/
    cout << "Contador: " << objeto1->getContador() << endl; 
    
    //Para llamar a la funcion estatica que pertenece a la clase y no a los objetos:
    //lo cual no necesitas un objeto para llamar a la funcion estatica
    cout << "La suma es: " << Estatico::suma(4,5) << endl << endl;
    //aunque puedes seguir usando objetos para llamar a los metodos
    cout << objeto1->suma(1, 1) << endl;
    cout << objeto2->suma(2, 2) << endl;
    cout << objeto4->suma(4, 4) << endl;
    

    //Objeto con Atributo no static como se cambiaria el valor
    cout << "Contador de otra manera que pertenece al objeto: ";
    Estatico *objeto3 = new Estatico(0);
    objeto3->conta();
    cout << objeto3->getContador2() << endl;

    delete objeto1, objeto2, objeto3, objeto4;
    return 0;
}
