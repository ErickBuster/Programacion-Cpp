/* Ejercisio 2
    Definir dos plantillas de funciones dentro de un archivo de 
    cabecera llamado "ordenar.h" que puedan oridenar tanto ascendentemente 
    como descendentemente un arreglo de N elementos  */
#include "ordenar.h"
#include <time.h>

template <typename T>
void llenadoArreglo(T *arreglo, int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        arreglo[i] = rand() % 100;
    }
}
template <typename T>
void mostrar(T *arreglo, int n){
    for(int i = 0; i < n; i++){
        cout << arreglo[i] << " ";
    }
}

int main(){
    int nelementos;
    cout << "Cuantos elementos tendra el arreglo?: ";
    cin >> nelementos;

    int *arreglo = new int[nelementos];
    llenadoArreglo(arreglo, nelementos);
    mostrar(arreglo, nelementos);
    cout << endl << endl;
    ordenarAscendente(arreglo, nelementos);
    mostrar(arreglo, nelementos);
    cout << endl << endl;
    ordenarDescendente(arreglo, nelementos);
    mostrar(arreglo, nelementos);
    cout << endl << endl;

    delete[] arreglo;
    return 0;    
}