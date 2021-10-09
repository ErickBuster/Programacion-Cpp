/*Realiza un programa que defina una matriz 
de 3x3 y escriba un ciclo para que muestre
la diagonal principal de la matriz */
#include <iostream>
using namespace std;
int main(){
    int n[100][100], f, c;
    cout << "Numero de filas: "; cin >> f;
    cout << "Numero de columnas: "; cin >> c;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << "Ingrese el numero en [" << i+1 << "][" << j+1 <<"]: ";
            cin >> n[i][j];
        }
    }
    cout << "\nLa matriz es" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nLos diagonales son: " << endl;
    for(int i = 0; i < f; i++){
        cout << n[i][i] << " ";
    }
}