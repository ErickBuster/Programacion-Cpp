#include <iostream>
using namespace std;
#include "Vehiculo.h"

float Vehiculo::getPrecio(){ return precio; }

void Vehiculo::mostrarDatos(){
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Precio: " << precio << endl << endl;
}
int Vehiculo::indiceMasBarato(Vehiculo coches[], int n){
    int indice = 0;
    float precio;
    precio = coches[0].getPrecio();
    for(int i = 1; i < n; i++){
        if(coches[i].getPrecio() < precio){
            precio = coches[i].getPrecio();
            indice = i;
        }
    }
    return indice;
}