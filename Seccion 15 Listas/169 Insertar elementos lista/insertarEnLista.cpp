/* Para insertar elementos en una lista
solo hay que seguir 4 pasos
    1. crear un nuevo nodo
    2. Asignar a nuevo nodo-> datp el elemento que 
    queremos incluir a la lista
    3. Crear dos nodos aux y asignar lista al primero de ellos
    4. Insertar el elemento a la lista
        -Al principio
        -En medio o al final
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);

int main(){
    Nodo *Lista = NULL;
    int numero;

    cout << "Ingrese un numero: "; cin >> numero;
    insertarLista(Lista, numero);
    return 0;
}
//Funciona para insertar elementos a la lista(ordenada)
void insertarLista(Nodo *&lista, int numero){
    //Paso 1
    Nodo *nuevo_nodo = new Nodo();
    // Paso 2
    nuevo_nodo->dato = numero;
    //paso 3
    Nodo *aux1 = lista;
    Nodo *aux2;
    //Paso 4
        //While para tener ordenada la lista 
    while((aux1 != NULL) && (aux1->dato < numero)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
        //condicion cuando el elemento va al Principio
    if(lista == aux1){
        lista = nuevo_nodo;
    }else{ //En caso de que el elemento vaya en medio o final
        //y es porque entro al while anterior y se recorrio de posicion
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    cout << "Dato " << lista->dato << " ingresado a la lista " << endl;
}