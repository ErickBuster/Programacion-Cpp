#include <iostream>
#include "ArregloObjetos.h"
using namespace std;

void Alumno::pedirDatos(){
    cout << "Digite la calificacion de MatematicasL: ";
    cin >> calif_Mate;
    cout << "Digite la calificacion de Programacion: ";
    cin >> calif_Progamacion;
}
void Alumno::mostrarNotas(){
    cout << "Nota Matematicas: " << calif_Mate << endl;
    cout << "Nota Programacion: " << calif_Progamacion << endl;
    cout << "Promedio: " << (calif_Progamacion + calif_Mate)/2 << endl;
}