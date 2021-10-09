/* Crear una lista que almacene n numeros reales
y calcular su suma y promedio de estos */
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Nodo{
    float dato;
    Nodo *siguiente;
};
void pedirDatos(Nodo *&, float);
void mostrarLista(Nodo *);
void promedio(Nodo *);

int main(){
    Nodo *Lista = NULL;
    int opcion; float numero;
    while(1){
        cout << "\n\tPromedio de la lista " << endl;
        cout << "1. Agregar numeros " << endl;
        cout << "2. Calcular promedio " << endl;
        cout << "3. Salir " << endl;
        cout << ">>: ";
        cin >> opcion;
        switch (opcion){
        case 1:
            cout << "Ingrese el numero: "; cin >> numero;
            pedirDatos(Lista, numero);
            break;
        case 2:
            cout << "\n\tCalculando Promedio " << endl;
            promedio(Lista);
            system("pause");
            break;
        case 3:
            exit(0);
            break;
        default:
            break;
        }
        system("cls");
    }
    return 0;
}
void pedirDatos(Nodo *&Lista, float dato){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = NULL;

    if(Lista == NULL){
        Lista = nuevo_nodo;
    }else{
        aux = Lista;
        while (aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo;
    }
    cout << "Elemento " << Lista->dato << " agregado " << endl;
}
void promedio(Nodo *Lista){
    if(Lista != NULL){
        mostrarLista(Lista);
        float suma = 0;
        int contador = 0;
        Nodo *aux = Lista;
        while (aux != NULL){
            suma += aux->dato;
            contador++;
            aux = aux->siguiente;
        }
        cout << "Suma " << suma << endl;
        cout << "Promedio: " << suma/contador << endl;
    }else{
        cout << "\n\tLista Vaica!! " << endl;
    }

}
void mostrarLista(Nodo *Lista){
    Nodo *aux = Lista;
    while (aux != NULL){
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }
    cout << endl;
}