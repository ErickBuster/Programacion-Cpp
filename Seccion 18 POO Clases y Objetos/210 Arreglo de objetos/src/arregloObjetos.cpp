//Arreglo de objetos
#include <iostream>
#include "ArregloObjetos.h"
using namespace std;

int main(){
    //Primera forma de declarar un objeto 
    Alumno grupoA[4]; //Arreglo de objetos estatico
    int i;
    cout << "\tGrupo A" << endl;
    for(i = 0; i < 4; i++){
        cout << "Pidiendo datos del alumno " << i+1 << endl;  
        grupoA[i].pedirDatos();
    }
    cout << "\n\t Notas Grupo A" << endl;
    for(i = 0; i < 4; i++){
        cout << "Mostrando notas del alumno " << i+1 << endl;
        grupoA[i].mostrarNotas();
    }
    
    //Segunda forma de declarar un objeto 
    Alumno *grupoB = new Alumno[3]; // Arreglo de objetos de forma dinamica
    cout << "\tGrupo B" << endl;
    for(i = 0; i < 3; i++){
        cout << "Pidiendo datos del alumno " << i+1 << endl;  
        (grupoB+i)->pedirDatos();
    }
    cout << "\n\t Notas Grupo B" << endl;
    for(i = 0; i < 3; i++){
        cout << "Mostrando notas del alumno " << i+1 << endl;
        (grupoB+i)->mostrarNotas();
    }
    // eliminando
    delete grupoB;
    return 0;
}