/* 1. Primero creamos el nodo (funcion)
    2. insertar el nodo en el arbol
        2.1 Vacio
        2.2 No esta vacio*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *derecha, *izquierda;
};
void menu();
void InsertarDato(Nodo *&, int);
Nodo *crearNodo(int);
Nodo *Arbol = NULL;
int main(){
    while (1){
        menu();
    }
    
    return 0;
}
void menu(){
    int opcion, numero;
    cout << "\n\tARBOLES" << endl;
    cout << "1. Insertar un dato en el arbol" << endl;
    cout << "0. Salir " << endl;
    cout << ">>: ";
    cin >> opcion;
    switch (opcion){
    case 1:
        /*cout << "Ingrese el numero: ";
        cin >> numero;*/
        numero = -15 + rand() % (20);
        InsertarDato(Arbol, numero);
        system("pause");
        break;
    case 0:
        exit(0);
        break;
    default:
        break;
    }
    system("cls");
}
// Funcion para crear un nuevo nodo
//Paso 1
Nodo *crearNodo(int dato){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = dato;
    nuevo_nodo->derecha = NULL;
    nuevo_nodo->izquierda = NULL;

    return nuevo_nodo;
}
//Funcion para insertar el Nodo
//paso 2
void InsertarDato(Nodo *&Arbol, int dato){
    if(Arbol == NULL){ // si el arbol esta vacio
        Nodo *nuevo_nodo = crearNodo(dato);
        Arbol = nuevo_nodo;
        cout << "Numero " << Arbol->dato << " agregado " << endl;
    }else{
        int valor_Raiz = Arbol->dato; // Obtenemos el valor de la raiz
        if(valor_Raiz < dato){
            InsertarDato(Arbol->izquierda, dato); // si es menor a la raiz, insertar izq
        }else{
            InsertarDato(Arbol->derecha, dato); // si es mayor a la raiz
        }
    }
}