#include <iostream>
using namespace std;

struct Datos
{
    char nombre[20];
    int edad;
}
persona1 = { "Luis", 25},
persona2;

int main(){
    cout << "Ingrese el nombre: ";
    cin.getline(persona2.nombre, 20);
    cout << "Ingrese su edad: "; cin >> persona2.edad;

    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Nombre: " << persona2.nombre << endl;
    cout << "Edad: " << persona2.edad << endl;

    return 0;
}