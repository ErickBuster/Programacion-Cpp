/*Polimorfismo:
    En POO, el polimorfismo permite que diferentes 
    objetos respondan de modo diferente al mismo
    mensaje. El polimorfismo adquiere su maxima potencia
    cuando se utiliza en union de herencia 
    Para poder utilizar polimorfismo en c++ se deben seguir
    las siguientes reglas:
        1. Crear una jerarquia de clases con las operaciones importantes 
        definidas por las funciones declaradas como virtuales en la clase
        base
        2. las implementaciones especificas de las funciones virtuales se deben
        hacer en las clases derivada. Cada clase derivada puede tener su propia
        version de las funciones.
Diagrama de clases

        Poligono -> clase abstracta por funciones virtuales
virtual +perimetro() : float
virtual +area() : float
        ^                           ^
        |                           |
    Rectangulo                  Triangulo
-base : float                   -lado1 : float
-altura : float                 -lado2 : float
+Rectangulo(float, float)       -lado3 : float
//metodos heredados             +Triangulo(float, float, float)
+perimetro() : float            //Metodos heredados 
+area() : float                 +perimetro() : float
                                +area() : float

Poligono *poligonos[2]; //se puede crear un objeto o un arreglo objeto de clase abstracta, mas no se pueden instanciar objetos!!
poligonos[0] = new Rectangulo(7,4); // Esto es instancia un Objeto!!!
    Y esto es un polimorfismo, lo cual un rectangulo estamos haciendo que 
    se comporte como un poligono, ya que un rectangulo es un poligono
poligonos[1] = new Triangulo(6,5,5); // es lo mismo a lo anterior
Lo cual cada objeto reaccionara de diferente manera al mismo mensaje como a continuacion
del ciclo for, lo cual mostrara el area del rectangulo y triangulo de forma distinta
for(int i = 0; i < 2; i+){
    cout << "Area " << poligonos[i]->area() << endl;
    cout << "Perimetro " << poligonos[i]->perimetro() << endl;
}*/
#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

int main(){
    //Poligono *poligono2[2] = new Poligono(); me marcaria un error porque estoy creando un objeti
    //y ademas estoy instanciando el objeto lo cual no esta permitido
    Poligono *poligono[2];
    poligono[0] = new Rectangulo(4, 5);
    poligono[1] = new Triangulo(6, 5, 5);

    for(int i = 0; i < 2; i++){
        cout << "Area: " << poligono[i]->area() << endl;
        cout << "Perimetro: " << poligono[i]->perimetro() << endl << endl;
    }
    delete poligono[0];
    delete poligono[1];
    return 0;
}