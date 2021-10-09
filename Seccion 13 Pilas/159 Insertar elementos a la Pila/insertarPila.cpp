/* Insertar elementos en la Pila: 4 Pasos
    1. Crear el espacio en memoria para almacenar un nodo
        pila = NULL;
        Nodo *nuevo_nodo = new Nodo();
    2. Cargar el valor dentor del nodo (dato)
    3. Cargar el puntero pula dentro del nodo(*siguiente)
    4. Asignar el nuevo nodo a pila
    */
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);

int main(){
    Nodo *pila = NULL;
    int n1, n2;
    cout << "Numero: "; cin >> n1;
    agregarPila(pila, n1);
    cout << "Numero: "; cin >> n2;
    agregarPila(pila, n2);
}
// Los 4 pasos para agregar elementos a una Pila
void agregarPila(Nodo *&pila, int numero){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = numero;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "Elemento " << nuevo_nodo->dato << " agregado correctamente " << endl;
}