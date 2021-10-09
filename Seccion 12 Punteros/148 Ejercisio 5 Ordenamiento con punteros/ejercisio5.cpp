/* Pedir al usuario n numeros, almacenarlos en un 
arreglo dinamico, posteriormente ordenar los numeros
en orden ascendente y mostrarlos en pantalla
NOTA: utilizar cualquier metodo de ordenamiento */
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void ordenarDatos(int *, int);
void mostrarDatos();

int numElementos, *elementos;

int main(){
    pedirDatos();
    ordenarDatos(elementos, numElementos);
    mostrarDatos();
    delete [] elementos;
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero de datos: ";
    cin >> numElementos;
    elementos = new int[numElementos];

    for(int i = 0; i < numElementos; i++){
        cout << ">>: ";
        cin >> *(elementos+i); // elementos[i];
    }
}
//metodo burbuja
void ordenarDatos(int *arreglo, int numeroElementos){
    int aux;
    for(int i = 0; i < numeroElementos; i++){
        for(int j = 0; j < numeroElementos - 1; j++){
            if(*(arreglo+j) > *(arreglo+j+1)){
                aux = *(arreglo+j);
                *(arreglo+j) = *(arreglo+j+1);
                *(arreglo+j+1) = aux;
            }
        }
    }
}
void mostrarDatos(){
    cout << "\tArreglo ordenado" << endl;
    for(int i = 0; i < numElementos; i++){
        cout << *(elementos+i) << " ";
    }
}
