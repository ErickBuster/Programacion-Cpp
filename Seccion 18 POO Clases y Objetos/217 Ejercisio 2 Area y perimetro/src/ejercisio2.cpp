/* Construir un programa que calcule el area y el 
perimetro de un cuadrilatero dada la longitud de sus dos
lados. los valores de la longitud deberan introducirse
por linea de ordenes. si es un cuadrado, solo cuadrado 
se proporcionara la longitd de uno de los lados al 
constructor */
#include <iostream>
using namespace std;
#include "classCuadrilatero.h"

int main(){
    Cuadrilatero *figura1;
    float l1, l2;
    cout << "Ingrese el lado 1 de la figura: ";
    cin >> l1;
    cout << "Ingrese el lado 2 de la figura: ";
    cin >> l2;

    if(l1 == l2){
        figura1 = new Cuadrilatero(l1);
    }else{
        figura1 = new Cuadrilatero(l1, l2);
    }

    cout << "Perimetro es: " << figura1->perimetro() << endl;
    cout << "Area: " << figura1->area() << endl << endl;
    return 0;
}