/* Eliminar elementos de una cola
Para eliminar elementos de una cola solo son 3 pasos:
    1. obtener el valor del nodo
    2. Crear un nodo aux y asignarle el frente de la cola
    3. Eliminar el nodo del frente de la cola
    */
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, int &);

int main(){
    Nodo *Frente = NULL, *Fin = NULL;
    int numero;
    int i = 5;
    // insertando elementos de la cola
    while (i >= 0){
        cout << "Ingrese numero: "; cin >> numero;
        insertarCola(Frente, Fin, numero);
        i--;
    }
    cout << "\n\n\tQuitando los elementos de la cola" << endl;
    //eliminando los elementos de la cola
    while(Frente != NULL){
        eliminarCola(Frente,Fin,numero);
        cout << numero;
        cout << (Frente != NULL ? " , " : " .");
    }
    return 0;
}
//Funciona para insertar elementos en una cola
void insertarCola(Nodo *&Frente, Nodo *&Fin, int numero){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = numero;
    nuevo_nodo->siguiente = NULL;
    if(colaVacia(Frente)){
        Frente = nuevo_nodo;
    }else{
        Fin->siguiente = nuevo_nodo;
    }
    Fin = nuevo_nodo;
    cout << "Elemento " << nuevo_nodo->dato << " insertar correctamente " << endl;
}
//Funcion para determinar si la cola esta vacia
bool colaVacia(Nodo *Frente){
    return (Frente == NULL) ? true : false;
}
void eliminarCola(Nodo *&Frente, Nodo *& Fin, int &numero){
    numero = Frente->dato;
    Nodo *aux = Frente;
    if(Frente == Fin){
        Frente = NULL;
        Fin = NULL;
    }else{
        Frente = Frente->siguiente;
    }
    delete aux;
}