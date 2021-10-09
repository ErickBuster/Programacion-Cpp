/* Hacer un programa utilizando pilas que contenga lo
siguiente 
    menu:   
        1. insertar un caracter a la pila
        2. mostrar todos los elementos de la pila
        3. salir
        */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

struct Caracteres{
    char caracter;
    Caracteres *siguiente;
};

void pedirDatos(Caracteres *&, char);
void mostrarDatos(Caracteres *&, char &);
void delay(int);

int main(){
    Caracteres *pila = NULL;
    char caracter;
    int opcion, sgundo = 1;
    while (1){
        cout << "\n\tPILA DE CARACTERES " << endl;
        cout << "1. Insertar un caracter a la pila " << endl;
        cout << "2. Mostrar elementos de la pila " << endl;
        cout << "3. Salir " << endl;
        cout << ">>: "; cin >> opcion;
        system("cls");
        switch (opcion){
            case 1:
                cout << "Ingrese el caracter: ";
                cin >> caracter;
                pedirDatos(pila, caracter);
                break;
            case 2:
                while(pila != NULL){
                    mostrarDatos(pila, caracter);
                    cout << caracter;
                    cout << (pila != NULL ? " , " : " .");
                }
                cout << endl;
                system("pause");
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Opcion incorrecta " << endl;
                break;
        }
        delay(sgundo);
        system("cls");
    }
    return 0;
}
void pedirDatos(Caracteres *& pila, char dato){
    Caracteres *nuevo_nodo = new Caracteres();
    nuevo_nodo->caracter = dato;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "Caracter: " << nuevo_nodo->caracter << " agregado" << endl;
}
void mostrarDatos(Caracteres *&pila, char &dato){
    Caracteres *aux = pila;
    dato = aux->caracter;
    pila = aux->siguiente;
    delete aux;
}
void delay(int segundos){
    for(int i = (time(NULL) + segundos); time(NULL) != i; time(NULL)){
    }
}