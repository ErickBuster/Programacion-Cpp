/*Asignacion dinamica de arreglos
new: Reserva el numerp de bytes solicitado por la declaracion
delete: libre un bloque de bytes reservado con anterioridad

forma estatica -> numeros[10];

Ejemplo: pedir al usuario n calificaciones y almacenarlos 
en un arreglo dinamico */
#include <iostream>
#include <stdlib.h> // Funciona new y delete
using namespace std;

void pedirNotas();
void mostrarDatos();

int numCalificaciones, *calificacion;

int main(){
    pedirNotas();
    mostrarDatos();
    delete [] calificacion; // liberando el espacio en bytes utilizados
    return 0;
}

void pedirNotas(){
    cout << "Ingrese el numero de calificaciones: ";
    cin >>numCalificaciones;

    calificacion = new int[numCalificaciones]; // crear el arreglo

    for(int i = 0; i < numCalificaciones; i++){
        cout << ">>: ";
        cin >> calificacion[i];
    }
}

void mostrarDatos(){
    cout << "\n\tMostrando notas " << endl;
    for(int i = 0; i < numCalificaciones; i++){
        cout << "nota " << i+1 << ": " << calificacion[i] << endl;
    }
}