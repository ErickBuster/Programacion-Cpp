/* 4 Pasos para quitar elementos pila
    1. Crear una variable aux de tipo Nodo
        Nodo * aux = pila
    2. Igualar el n a aux->dato
        n = aux->dato
    3. Pasar pila a siguiente nodo
        pila = aux->siguiente;
    4. Eliminar aux
        delete aux;
        */
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void quitarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato;
    for(int i = 0; i < 5; i++){
        cout << "Numero: "; cin >> dato;
        agregarPila(pila, dato);
    }
    cout << "\n\tSacando los elementos de la pila " << endl;
    while(pila != NULL){
        quitarPila(pila, dato);
        cout << dato << (pila != NULL ? " , " : " . ");
    }
}
// Los 4 pasos para agregar elementos a una Pila
void agregarPila(Nodo *&pila, int numero){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = numero;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "Elemento " << nuevo_nodo->dato << " agregado correctamente " << endl;
}
void quitarPila(Nodo *&pila, int &numero){
    Nodo *aux = pila;
    numero = aux->dato;
    pila = aux->siguiente;
    delete aux;
}