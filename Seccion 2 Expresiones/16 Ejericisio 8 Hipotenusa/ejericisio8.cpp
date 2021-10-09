/*Escriba un programa que lea de la entrada estandar los dos
 catetos de un triangulos y escriba en la salida
  estandar su hipotenusa */ 
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float ca, co, h;
    cout << "Ingrese el cateto opuesto: ";
    cin >> co;
    cout << "Ingrese el cateto adyacente: ";
    cin >> ca;
    h = sqrt(pow(ca, 2) + pow(co,2));
    cout << "El valor de la Hipotenusa es: "<< h << endl;

    system("pause");
    return 0;
}