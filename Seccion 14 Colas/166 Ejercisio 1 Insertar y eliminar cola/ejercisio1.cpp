/* Hacer un programa utilizandp colas que contenga
el siguiente menu:
    1. Insertar un caracter a una cola
    2. Mostrar todos los elementos de la cola
    3. Salir */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, char);
bool colaVacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, char &);
void delay(int);

int main(){
    Nodo *Frente = NULL, *Fin = NULL;
    char caracter;
    int i = 5;
    int opcion, sgundo = 1;
    while (1){
        cout << "\n\tCOLA DE CARACTERES " << endl;
        cout << "1. Insertar un caracter a la cola " << endl;
        cout << "2. Mostrar elementos de la cola " << endl;
        cout << "3. Salir " << endl;
        cout << ">>: "; cin >> opcion;
        system("cls");
        switch (opcion){
            case 1:
                cout << "Ingrese el caracter: ";
                cin >> caracter;
                insertarCola(Frente, Fin, caracter);
                break;
            case 2:
                while(Frente != NULL){
                    eliminarCola(Frente,Fin,caracter);
                    cout << caracter;
                    cout << (Frente != NULL ? " , " : " .");
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
//Funciona para insertar elementos en una cola
void insertarCola(Nodo *&Frente, Nodo *&Fin, char caracter){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = caracter;
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
void eliminarCola(Nodo *&Frente, Nodo *& Fin, char &caracter){
    caracter = Frente->dato;
    Nodo *aux = Frente;
    if(Frente == Fin){
        Frente = NULL;
        Fin = NULL;
    }else{
        Frente = Frente->siguiente;
    }
    delete aux;
}
void delay(int segundos){
    for(int i = (time(NULL) + segundos); time(NULL) != i; time(NULL)){
    }
}