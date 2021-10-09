// Paso de parametros de tipo estructura
#include <iostream>
using namespace std;

struct Persona
{
    char nombre[20];
    int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona);

int main(){

    pedirDatos();
    mostrarDatos(p1);
    
    return 0;
}

void pedirDatos(){
    cout << "Ingrese su nombre: ";
    cin.getline(p1.nombre,20);
    cout <<"Ingrese su edad: ";
    cin >> p1.edad;
}

void mostrarDatos(Persona p){
    cout << "Nombre: " << p.nombre << endl;
    
    cout << "Edad: " << p.edad << endl;
}