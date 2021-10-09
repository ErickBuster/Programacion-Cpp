#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *derecha, *izquierda;
    Nodo *padre; // agregando padre
};
void menu();
Nodo *crearNodo(int, Nodo *);
void InsertarDato(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool buscarDato(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminarNodoArbol(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

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
    cout << "6. Recorrer el arbol en postOrden" << endl;
    cout << "7. Eliminar un nodo en el arbol " << endl;
    cout << "0. Salir " << endl;
    cout << ">>: ";
    cin >> opcion;
    switch (opcion){
    case 1:
        cout << "Ingrese el numero: ";
        cin >> numero;
        //numero = 1 + rand() % (20);
        InsertarDato(Arbol, numero, NULL);
        system("pause");
        break;
    case 2:
        mostrarArbol(Arbol, contador);
        system("pause");
        break;
    case 3:
        mostrarArbol(Arbol, contador);
        cout << "Ingrese el numero: ";
        cin >> numero;
        //numero = 1 + rand() % (20);
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
        cout << "\n\t Recorrido en inOrden " << endl;
        inOrden(Arbol);
        cout << endl << endl;
        system("pause");
        break;
    case 6:
        mostrarArbol(Arbol, contador);
        cout << "\n\t Recorrido en postOrden " << endl;
        postOrden(Arbol);
        cout << endl << endl;
        system("pause");
        break;
    case 7:
        mostrarArbol(Arbol, contador);
        cout << "\n\t Ingrese el numero a eliminar: ";
        cin >> numero;
        eliminarNodoArbol(Arbol, numero);
        cout << endl << endl;
        system("pause");
        break;
    case 0:
        exit(0);
        break;
    }
    system("cls");
}
// Funcion para crear un nuevo nodo
//Paso 1
Nodo *crearNodo(int dato, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = dato;
    nuevo_nodo->derecha = NULL;
    nuevo_nodo->izquierda = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}
//Funcion para insertar el Nodo
//paso 2
void InsertarDato(Nodo *&Arbol, int dato, Nodo *padre){
    if(Arbol == NULL){ // si el arbol esta vacio
        Nodo *nuevo_nodo = crearNodo(dato, padre);
        Arbol = nuevo_nodo;
        cout << "Numero " << Arbol->dato << " agregado " << endl;
    }else{
        int valor_Raiz = Arbol->dato; // Obtenemos el valor de la raiz
        if(dato < valor_Raiz){
            InsertarDato(Arbol->izquierda, dato, Arbol); // si es menor a la raiz, insertar izq
        }else{
            InsertarDato(Arbol->derecha, dato, Arbol); // si es mayor a la raiz
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
void postOrden(Nodo *Arbol){
    if(Arbol == NULL){
        return;
    }else{
        postOrden(Arbol->izquierda);
        postOrden(Arbol->derecha);
        cout << Arbol->dato << " -> ";
    }
}
//Funcion para eliminar un nodo del arbol
void eliminarNodoArbol(Nodo *Arbol, int dato){
    if(Arbol == NULL){// si el arbol esta vacio
        return;// no hace nada
    }else if(dato < Arbol->dato){ // si el valor es menor
        eliminarNodoArbol(Arbol->izquierda, dato);// busca por la izq
    }else if(dato > Arbol->dato){ // si el valor es mayor
        eliminarNodoArbol(Arbol->derecha, dato); // busca por la derecha
    }else{// si ya encontraste el valor
        eliminarNodo(Arbol);
    }
}
// Funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
    //Borar un nodo con dos sub-arboles hijos
    if(nodoEliminar->izquierda && nodoEliminar->derecha){ // si tiene hijo izq y der
        Nodo *menor = minimo(nodoEliminar->derecha); // buscar el nodo mas min del lado der
        nodoEliminar->dato = menor->dato; // igualando el nodo izq con el menro dato
        eliminarNodo(menor); //llamando de nuevo para eliminar el nodo
    }
    //Borar un nodo si solo tiene un sub-arbol hijo 
    else if(nodoEliminar->izquierda){
       reemplazar(nodoEliminar, nodoEliminar->izquierda);
        destruirNodo(nodoEliminar);
    }else if(nodoEliminar->derecha){
       reemplazar(nodoEliminar, nodoEliminar->derecha);
        destruirNodo(nodoEliminar);
    }
    //Si el nodo no tiene hijos
    else{ 
        reemplazar(nodoEliminar,NULL);
        destruirNodo(nodoEliminar);
    }
}
//Funcion para determinar el nodo mas izq posible
Nodo *minimo(Nodo *arbol){
    if(arbol == NULL){ //si el arbol esta vacio
        return NULL;// retorna null
    }if(arbol->izquierda){ //si tiene hijo izq
        return minimo(arbol->izquierda);
    }else{// si no tiene hijo izq
        return arbol; // retornamos el mismo nodo
    }
}
//Funcion para remplazar 2 nodos de 1 solo hijo
void reemplazar(Nodo *arbol, Nodo *nuevo_nodo){
    if(arbol->padre){
        //arbol->padre hay que asignarle el nuevo hijo
        if(arbol->dato == arbol->padre->izquierda->dato){ // cuando el nodo tenga un hijo izq
            arbol->padre->izquierda = nuevo_nodo;
        }else if(arbol->dato == arbol->padre->derecha->dato){   // cuando el nodo tenga un hijo der
            arbol->padre->derecha = nuevo_nodo;
        }
    }if(nuevo_nodo){
        //procedemos a asignarle su nuevo padre
        nuevo_nodo->padre = arbol->padre;
    }
}
//Funcion para eliminar el nodo
void destruirNodo(Nodo *nodoEliminar){
    nodoEliminar->izquierda = NULL;
    nodoEliminar->derecha = NULL;
    delete nodoEliminar;
}