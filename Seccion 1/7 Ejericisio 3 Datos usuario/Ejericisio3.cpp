/* Realice un programa que lea de la entrada estandar los 
siguientes datos de una persona
    Edad: dato de tipo entero
    Sexo: dato de tipo caracter
    Altura en metros: dato de tipo real

Y mostrarlos en la salida */
#include <iostream>
using namespace std;
int main(){
    int edad;
    char sexo;
    float altura;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "\nIngrese su sexo M / F: ";
    cin >> sexo;
    cout << "\nIngrese su altura en metros: ";
    cin >> altura;

    cout << "Su edad es: " << edad << endl;
    cout << "Su sexo es: " << sexo << endl;
    cout << "su altura es: " << altura << " metros" << endl;

    system("pause");
    return 0;
}