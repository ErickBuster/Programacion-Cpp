/*Insertar elementos en una cola
Para insertar elementos en una cola, solo hay que seguir 
3 pasos:
    1. Crear espacio en memoria para almacenar un nodo;
    2. Asignar ese nuevo nodo al dato que queremos insertar
    3. Asignar los punteros frente y fin hacia el nuevo nodo
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

int main(){
    Nodo *Frente = NULL, *Fin = NULL;
    int numero;
    int i = 2;
    while (i >= 0){
        cout << "Ingrese numero: "; cin >> numero;
        insertarCola(Frente, Fin, numero);
        i--;
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