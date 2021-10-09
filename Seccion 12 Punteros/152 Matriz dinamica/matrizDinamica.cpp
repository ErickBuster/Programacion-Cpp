/* Matrices Dinamicas
ejemplo: rellenar una matriz de n x m y mostrar su contenido
    **puntero_matriz -> *puntero_fila -> [int][int]
                        *puntero_fila -> [int][int]
                        *puntero_fila -> [int][int]
                        1 2 3   1   -> 2 3
                        4 5 6   4   ->  5 6
                        7 8 9   7   ->  8 9
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **);

int **punteroMatriz;
int fila, columnas;

int main(){
    
    pedirDatos();
    mostrarMatriz(punteroMatriz);

    //liberando memoria
    for(int i = 0; i < fila; i++){
        delete [] punteroMatriz[i];
    }
    delete [] punteroMatriz;
    return 0;
}

void pedirDatos(){
    cout << "Numero de filas: "; cin >> fila;
    cout << "Numero de columnas: "; cin >> columnas;

    punteroMatriz = new int *[fila]; // reservando memoria para filas
    for(int i = 0; i < fila; i++){
        punteroMatriz[i] = new int[columnas]; // reservando memoria para columnas
    }

    for(int i = 0; i < fila; i++){
        for(int j = 0; j < columnas; j++){
            cout << ">>: ";
            cin >> *(*(punteroMatriz+i)+j); // punteroMatriz[i][j];
        }
    }
}

void mostrarMatriz(int **matriz){
    cout << "\n\tMostrando Matriz " << endl;
    for(int i = 0; i < fila; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << endl;
    }
}