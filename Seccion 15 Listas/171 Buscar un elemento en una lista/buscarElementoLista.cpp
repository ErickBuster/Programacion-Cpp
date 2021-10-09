/* Buscar un elemento en una lista
Para buscar un elemento en una lista, solo hay que seguir 4
pasos
    1. crear un nuevo nodo
    2. igualar ese nuevo nodo a la lista
    3. recorrer la lista
    4. determinar si el elemento existe o no en la lista
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarElementoLista(Nodo *, int);
void delay(int);

int main(){
    Nodo *Lista = NULL;
    int numero, opcion, segundos = 4;
    while(1){
        cout << "\tLISTA " << endl;
        cout << "1. Agregar elementos a la lista" << endl;
        cout << "2. Mostrar elementos de la lista " << endl;
        cout << "3. Buscar un elemento en la lista" << endl;
        cin >> opcion;
        switch (opcion){
        case 1:
            cout << "Ingrese un numero: "; cin >> numero;
            insertarLista(Lista, numero);
            delay(2);
            break;
        case 2:
            mostrarLista(Lista);
            delay(segundos);
            break;
        case 3:
            cout << "Ingrese el numero a buscar: "; cin >> numero;
            buscarElementoLista(Lista, numero);
            delay(segundos);
            break;
        /*default:
            cout << "Opcion Incorrecta " << endl;
            delay(1);
            exit(0);
            break;*/
        }
        system("cls");
    }
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
// Funciona para mostrar la lista
void mostrarLista(Nodo *Lista){
    //Paso 1
    Nodo *corredor = new Nodo();
    // Paso 2
    corredor = Lista;
    // Paso 3
    while (corredor != NULL){
        cout << corredor->dato;
        cout << (corredor->siguiente != NULL ? " -> " : " -> NULL");
        corredor = corredor->siguiente;
    }
}
//Funcion para buscar un elemento
void buscarElementoLista(Nodo *Lista, int dato){
    //Paso 1
    Nodo *buscador = new Nodo();
    // Paso 2
    buscador = Lista;
    bool existe = false;
    //Paso 3
    while((buscador != NULL) && (buscador->dato <= dato) && !existe){
        if(buscador->dato == dato){
            existe = true;
        }
        buscador = buscador->siguiente;
    }
    // Paso 4
    cout << "El elemento " << dato;
    cout << (existe ? " existe" : " NO existe") << endl;
}
void delay(int segundos){
    for(int i = (time(NULL)+segundos); time(NULL) != i; time(NULL)){}
}