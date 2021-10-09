/* Realice un prigrama que lea una matriz dinamica
de nxm y cree su matriz transpuesta */
#include <iostream>
using namespace std;

int **m1, **m2, filas, columnas;

void pedirDatos();
void transpuesta(int **, int **);
void mostrarMatrices(int **, int **);
void cleanMemory(int **, int **);


int main(){
    pedirDatos();
    transpuesta(m1,m2);
    mostrarMatrices(m1,m2);
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
}
void transpuesta(int **M1, int **M2){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            *(*(M2+i)+j) = *(*(M1+j)+i);
        }
    }
}
void mostrarMatrices(int **M1, int **M2){
    cout << "\n\tMatriz 1" << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(*(M1+i)+j) << " ";
        }
        cout << endl;
    }
    cout << "\n\tMatriz transpuesta" << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << *(*(M2+i)+j) << " ";
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