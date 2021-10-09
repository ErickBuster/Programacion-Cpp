/*Realice un programa que calcule la suma 
de dos matrices dinamicas */
#include <iostream>
#include <stdlib.h>
using namespace std;

int **m1, **m2, filas, columnas;

void pedirDatos();
void mostrarM(int **, int **);
void suma(int **, int **);
void MatrizR(int **);
void cleanMemory(int **, int **);

int main(){
    pedirDatos();
    mostrarM(m1,m2);
    suma(m1,m2);
    MatrizR(m1);
    cleanMemory(m1,m2);
    return 0;
}
void pedirDatos(){
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    m1 = new int *[filas];
    m2 = new int *[filas];

    for(int i = 0; i < filas; i++){
        m1[i] = new int[columnas];
        m2[i] = new int[columnas];
    }

    cout << "\tMatriz 1 " << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << ">>: ";
            cin >> *(*(m1 + i) + j);
        }
    }

    cout << "\tMatriz 2 " << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << ">>: ";
            cin >> *(*(m2 + i) + j);
        }
    }
}
void suma(int **M1, int **M2){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            *(*(M1+i)+j) += *(*(M2+i)+j);
        }
    }
}
void mostrarM(int **M1, int **M2){
    cout << "\n\tMatriz 1" << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(*(M1+i)+j) << " ";
        }
        cout << endl;
    }
    cout << "\n\tMatriz 2" << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(*(M2+i)+j) << " ";
        }
        cout << endl;
    }
}
void MatrizR(int ** R){
    cout << "\n\t Suma Matriz " << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(*(R+i)+j) << " ";
        }
        cout << endl;
    }
}
void cleanMemory(int **x, int **y){
    for(int i = 0; i < filas; i++){
        delete [] x[i];
        delete [] y[i];
    }
    delete [] x;
    delete [] y;
}