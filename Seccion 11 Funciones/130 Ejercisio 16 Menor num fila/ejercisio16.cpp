/* realice una funcion que dada una matriz 
y un numero de fila de la matriz devuelva el menor
 de los elementos almacenados en dicha fila */
#include <iostream>
using namespace std;

void pedirDatos();
void mostrandoMatriz();
void numMayorFilas();

int n[100][100], Filas,Columnas;

int main(){
    pedirDatos();
    mostrandoMatriz();
    numMayorFilas();
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero de filas: "; cin >> Filas;
    cout << "Ingrese el numero de columnas: "; cin >> Columnas;
    cout << "\tIngrese los valores de la Matriz" << endl;
    for(int i = 0; i < Filas; i++){
        for(int j = 0; j < Columnas; j++){
            cout << ">>: "; cin >> n[i][j];
        }
    }
}
void mostrandoMatriz(){
    cout << "\tMatriz Original " << endl;
    for(int i = 0; i < Filas; i++){
        for(int j = 0; j < Columnas; j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
}

void numMayorFilas(){
    int nMenor;
    for(int i = 0; i < Filas; i++){
        nMenor = n[i][0];
        for(int j = 1; j < Columnas; j++){
            if(nMenor > n[i][j]){
                nMenor = n[i][j];
            }
        }
        cout << "numero mayor de la fila " << i+1 << ": " << nMenor << endl;
    }
}