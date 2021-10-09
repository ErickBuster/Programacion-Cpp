/*escriba una funcion nombrada funpot() que
eleve un numero entero que se la transmita a una potencia
en un numero positivo debera ser el sugundo valor 
transmitido a la funcion */
#include <iostream>
#include <math.h>
using namespace std;

void pedirDatos();
void funpot();
int numero, exponente;
int main(){
    pedirDatos();
    funpot();
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero: ";
    cin >> numero;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
}

void funpot(){
    cout << "resultado: " << pow(numero, exponente) << endl;
}