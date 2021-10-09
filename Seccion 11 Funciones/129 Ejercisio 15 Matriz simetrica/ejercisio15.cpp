/*desarrollar una funcion que determine si una matriz es 
simetrica o no */
#include <iostream>
using namespace std;

void pedirDatos();
void mostrandoMatriz();
void simetrica();

int n[100][100], FilasCol;

int main(){
    pedirDatos();
    mostrandoMatriz();
    simetrica();

    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero de filas = Columnas: "; cin >> FilasCol;
    cout << "\tIngrese los valores de la Matriz" << endl;
    for(int i = 0; i < FilasCol; i++){
        for(int j = 0; j < FilasCol; j++){
            cin >> n[i][j];
        }
    }
}
void mostrandoMatriz(){
    cout << "\tMatriz Original " << endl;
    for(int i = 0; i < FilasCol; i++){
        for(int j = 0; j < FilasCol; j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
}

void simetrica(){
    bool T = true;
    cout << "\tMatriz Transpuesta " << endl;
    for(int i = 0; i < FilasCol; i++){
        for(int j = 0; j < FilasCol; j++){
            cout << n[j][i] << " ";
            n[i][j] == n[j][i] ? T : T = false;
        }
        cout << endl;
    }
    cout << (T == true ? "Es" : "No es");
    cout << " una matriz Simetrica" << endl;
}