/* Crear una lista que almacene n numeros enteros
y calcular el manor y mayor de ellos */
#include <ctime>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void pedirDatos(Nodo *&, int);
void mostrarLista(Nodo *);
void mayorMenorLista(Nodo *);

int main(){
    Nodo *Lista = NULL;
    int opcion, numero;
    while (1){
        cout << "\n\tLISTA DE NUMEROS " << endl;
        cout << "1. Insertar un numero a la lista " << endl;
        cout << "2. Mostrar la lista " << endl;
        cout << "3. Determinar el numero mayor y menor" << endl;
        cout << "4. Salir" << endl;
        cout << ">>: ";
        cin >> opcion;
        switch (opcion){
        case 1:
            cout << "Ingrese el numero: "; cin >> numero;
            pedirDatos(Lista, numero);
            break;
        case 2:
            mostrarLista(Lista);
            break;
        case 3:
            mayorMenorLista(Lista);
            break;
        default:
            break;
        }
    }
    


    return 0;
}
void pedirDatos(Nodo *&Lista, int dato){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;

    Nodo *aux1 = Lista, *aux2;

    while (aux1 != NULL && aux1->dato < dato){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if(Lista == aux1){
        Lista = nuevo_nodo;
    }else{
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    cout << "Elemento " << Lista->dato << " se agrego " << endl;
}
void mostrarLista(Nodo *Lista){
    Nodo *recorrer = Lista;
    while (recorrer != NULL){
        cout << recorrer->dato;
        cout << (recorrer->siguiente != NULL ? " -> " : " -> NULL");
        recorrer = recorrer->siguiente;
    }
}
void mayorMenorLista(Nodo *Lista){
    if(Lista != NULL){
        mostrarLista(Lista);
        Nodo *menor = Lista, *mayor = Lista;
        while(mayor->siguiente != NULL){
            mayor = mayor->siguiente;
        }
        cout << "\nNumero menor: " << menor->dato << endl;
        if(menor == mayor){
            cout << " y el mayor es el mismo numero" << endl;
        }else{
            cout << "Numero mayor: " << mayor->dato << endl;;
        }
    }else{
        cout << "\tLista Vacia " << endl;
    }
}