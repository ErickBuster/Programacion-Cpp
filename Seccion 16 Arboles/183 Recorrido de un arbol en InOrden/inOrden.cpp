/* Recorrido en InOrden:
(izquierda, raiz, derecha). Para recorrer un arbol
binario no vacio en InOrden, hay que realizar las 
siguientes operaciones recursivamente en cada nodo:
    1. Atraviese el sub-arbol izquierdo
    2. visite la raiz
    3. Atraviese el sub-arbol derecho

    1. Definir la funcion
    2. checar si el arbol esta vacio
    3. llamar la funcion de nuevo del lado izquierda
        mostrar la informacion
    4. llamar la funcion del lado derecho */
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
void mostrarArbol(Nodo *, int);
bool buscarDato(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
Nodo *Arbol = NULL;
int main(){
    while (1){ menu();}
    return 0;
}
void menu(){
    int opcion, numero, contador = 0;
    cout << "\n\tARBOLES" << endl;
    cout << "1. Insertar un dato en el arbol" << endl;
    cout << "2. Mostrar el arbol" << endl;
    cout << "3. Buscar el numero en el arbol " << endl;
    cout << "4. Recorrer el arbol en preOrden " << endl;
    cout << "5. Recorrer el arbol en inOrden " << endl;
    cout << "0. Salir " << endl;
    cout << ">>: ";
    cin >> opcion;
    switch (opcion){
    case 1:
        //cout << "Ingrese el numero: ";
        //cin >> numero;
        numero = 1 + rand() % (20);
        InsertarDato(Arbol, numero);
        system("pause");
        break;
    case 2:
        mostrarArbol(Arbol, contador);
        system("pause");
        break;
    case 3:
        mostrarArbol(Arbol, contador);
        numero = 1 + rand() % (20);
        cout << "\n\tEl dato " << numero;
        cout << (buscarDato(Arbol, numero) ? " existe" : " NO existe ") << endl;
        system("pause");
        break;
    case 4:
        mostrarArbol(Arbol, contador);
        cout << "\n\t Recorrido en preOrden " << endl;
        preOrden(Arbol);
        cout << endl << endl;
        system("pause");
        break;
    case 5:
        mostrarArbol(Arbol, contador);
        cout << "\n\t Recorrido en preOrden " << endl;
        inOrden(Arbol);
        cout << endl << endl;
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
        if(dato < valor_Raiz){
            InsertarDato(Arbol->izquierda, dato); // si es menor a la raiz, insertar izq
        }else{
            InsertarDato(Arbol->derecha, dato); // si es mayor a la raiz
        }
    }
}
//Funcion para mostrar el arbol completo
//paso 1
void mostrarArbol(Nodo *Arbol, int contador){
    //paso 2
    if(Arbol == NULL){
        return;
    }else{ // Paso 3
        mostrarArbol(Arbol->derecha, contador+1);
            for(int i = 0; i < contador; i++){
                cout << "  ";
            }
            cout << Arbol->dato << endl;
        //Paso 4
        mostrarArbol(Arbol->izquierda, contador+1);
    }
}
//Funcion para buscar un dato en el arbol
bool buscarDato(Nodo *Arbol, int dato){ // paso 1
    //Paso 2
    if(Arbol == NULL){
        return false;
    }else if(dato == Arbol->dato){
        return true;
    }else if(dato < Arbol->dato){
        return buscarDato(Arbol->izquierda, dato);
    }else{
        return buscarDato(Arbol->derecha, dato);
    }
}
// Funcion para recorrer el arbol en preOrden
void preOrden(Nodo* Arbol){ // paso 1
    if(Arbol == NULL){ // paso 2
        return;
    }else{
        cout << Arbol->dato << " -> "; // paso 3
        preOrden(Arbol->izquierda); // paso 4
        preOrden(Arbol->derecha); // paso 5
    }
}
//Funcion para recorrer el arbol en inOrden
void inOrden(Nodo *Arbol){ //paso 1
    if(Arbol == NULL){// paso 2
        return;
    }else{
        inOrden(Arbol->izquierda); // paso 3
        cout << Arbol->dato << " -> "; 
        inOrden(Arbol->derecha);// paso 4
    }
}