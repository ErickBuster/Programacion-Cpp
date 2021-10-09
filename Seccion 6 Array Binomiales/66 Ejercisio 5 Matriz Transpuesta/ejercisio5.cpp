/* Realice un programa que lea una matriz de 3x3 
y creee su matriz transpuesta. la matriz transpuesta
es aquella en la que la columna era la fila de la matriz */
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n[3][3];
    cout << "\tMatriz Original" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            n[i][j] = 1 + rand() % 100;
            cout << n[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\tMatriz Transpuesta " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << n[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}