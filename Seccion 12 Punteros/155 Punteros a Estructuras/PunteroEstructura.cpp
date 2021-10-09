//Punteros a estructuras
#include <iostream>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}persona, *p_persona = &persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main(){
    pedirDatos();
    mostrarDatos(p_persona);
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el nombre: ";
    cin.getline(p_persona->nombre, 30);
    cout << "Ingrese la edad: "; cin >> p_persona->edad;
}
void mostrarDatos(Persona *puntero_persona){
    cout << "Nombre: " << puntero_persona->nombre << endl;
    cout << "Edad: " << puntero_persona->edad << endl;
}