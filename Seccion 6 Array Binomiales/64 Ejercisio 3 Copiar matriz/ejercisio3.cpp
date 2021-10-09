/* Hacer una matriz de tipo entera de 2x2, llenarla
de numeros y luego copiar todo su contenido hacia otra matriz */
#include <iostream>
using namespace std;
int main(){
    int n[2][2] , m[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Ingrese el numero en [" << i+1 << "][" << j+1 <<"]: ";
            cin >> n[i][j];
        }
    }
    cout << "\nLa matriz es" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            m[i][j] = n[i][j];
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}