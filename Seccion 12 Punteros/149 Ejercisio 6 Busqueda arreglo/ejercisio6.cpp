/*Hacer una funcion para almacenar N numeros
en un arreglo dinamico, posteriormente en otra
funcion buscar un numero en particular
Nota: puedes utilizar metodo de busqueda(secuencial
o binaria) */
#include <iostream>
using namespace std;

void pedirDatos();
void buscarNumero(int *, int);

int numElementos, *elementos;

int main(){
    pedirDatos();
    buscarNumero(elementos, numElementos);
    delete [] elementos;
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero de datos: ";
    cin >> numElementos;
    elementos = new int[numElementos];

    for(int i = 0; i < numElementos; i++){
        cout << ">>: ";
        cin >> *(elementos+i); // elementos[i];
    }
}

void buscarNumero(int *vector, int nelementos){
    int dato, i = 0;
    bool T = false;
    cout << "Ingrese el numero a buscar en el arreglo: "; cin >> dato;
    while((!T) && (i < nelementos)){
        if(*(vector+i) == dato){
            T = true;
        }
        i++;
    }
    cout << "El numero " << dato;
    cout << (T ? " fue encontrado" : " no fue encontrado ") << endl;
}