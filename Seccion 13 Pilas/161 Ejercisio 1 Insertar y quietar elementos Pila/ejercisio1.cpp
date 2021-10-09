/* Hacer un programa para agregar numeros enteros
a una pila, hasta que el usuario lo decida, despues
mostrar todos los numeros introducidos en la pila */
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void ingresarDatoPila(Nodo *&, int);
void quitarElementos(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int numero;
    char opcion;
    do{
        cout << "Ingrese el numero: ";
        cin >> numero;
        ingresarDatoPila(pila, numero);
        cout << "Quiere ingresar otro numero ? (s/n): ";
        cin >> opcion;
        system("cls");
    }while(opcion == 's' || opcion == 'S');
    cout << "\n\tElementos de la Pila" << endl;
    while(pila != NULL){
        quitarElementos(pila, numero);
        cout << numero;
        cout << (pila != NULL ? " , " : " .");
    }
}
void ingresarDatoPila(Nodo *&pila, int dato){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "Numero " << nuevo_nodo->dato 
    << " agrega correctamente a la Pila " << endl;
}
void quitarElementos(Nodo *&pila, int &dato){
    Nodo *aux = pila;
    dato = aux->dato;
    pila = aux->siguiente;
    delete aux;
}