// Paso de parametros tipo matriz
// Elevar al cuadrado todos los elementos de la matriz
#include <iostream>
using namespace std;

void mostrarMatriz(int m[][3], int, int);
void cuadradoMatriz(int m[][3], int, int);
void matrizElevada(int m[][3], int, int);
int main(){
    const int nFilas = 2;
    const int nCol = 3;
    int matriz[nFilas][nCol] = {{1,2,3},{4,5,6}};

    mostrarMatriz(matriz, nFilas, nCol);
    cuadradoMatriz(matriz, nFilas, nCol);
    matrizElevada(matriz, nFilas, nCol);

    return 0;
}

void mostrarMatriz(int m[][3], int filas, int colum){
    cout << "\tMatriz Original: " << endl;
    for(int i = 0; i < filas; i++){
        for(int j  = 0; j < colum; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void cuadradoMatriz(int m[][3], int filas, int colum){
    for(int i = 0; i < filas; i++){
        for(int j  = 0; j < colum; j++){
            m[i][j] *= m[i][j];
        }
        cout << endl;
    }
}
void matrizElevada(int m[][3], int filas, int colum){
    cout << "\tMatriz Elevada: " << endl;
    for(int i = 0; i < filas; i++){
        for(int j  = 0; j < colum; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}