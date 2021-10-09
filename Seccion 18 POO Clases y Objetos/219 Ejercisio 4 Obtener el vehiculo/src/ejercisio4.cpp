/* Construir un programa que dada una serie de vehiculos
caracterizados por su marca, modelo y precio, imprima 
las propiedades del vehiculo mas barato. Para ello, 
se deberan leer por teclado las caracteristicas
de cada vehiculo y crear una clase que represente
a cada uno de ellos */
#include <iostream>
#include "Vehiculo.h"
using namespace std;

int main(){
    Vehiculo *coches;
    int indice_Barato, numero_vehiculos;
    string marca, modelo;
    float precio;

    cout << "Ingrese el numero de vehiculos: ";
    cin >> numero_vehiculos;

    coches = new Vehiculo[numero_vehiculos]; // Arreglo de objetos
    for(int i = 0; i < numero_vehiculos; i++){
        fflush(stdin);
        cout << "\n\tDigite los datos del vehiculo " << i+1 << endl;
        cout << "Digite la marca: "; getline(cin, marca);
        cout << "Digite el modelo: "; getline(cin, modelo);
        cout << "Ingrese su precio: "; cin >> precio;
        *(coches + i) = Vehiculo(marca, modelo, precio);
    }
    
    cout << "\n\n\tEl auto mas barato es " << endl;
    indice_Barato = Vehiculo::indiceMasBarato(coches, numero_vehiculos);
    (coches + indice_Barato)->mostrarDatos();
    //es lo mismo que coches[indice_Barato].mostrarDatos();

    delete[] coches;
    return 0;
}