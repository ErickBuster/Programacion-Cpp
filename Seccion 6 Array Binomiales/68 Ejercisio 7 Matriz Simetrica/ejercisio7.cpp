/* Determinar si una matriz es simetrica */
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n[100][100], f;
    bool T = true;
    cout << "Ingrese el numero de filas: "; cin >> f;
    cout << "\tIngrese los valores de la Matriz" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < f; j++){
            cin >> n[i][j];
        }
    }
    cout << "\tMatriz Original " << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < f; j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\tMatriz Transpuesta " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << n[j][i] << " ";
            n[i][j] == n[j][i] ? T : T = false;
        }
        cout << endl;
    }
    cout << (T == true ? "Es " : "No es");
    cout << " una matriz Simetrica" << endl;
    return 0;
}