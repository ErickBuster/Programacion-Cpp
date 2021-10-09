/* Hacer una matriz preguntando al usuario 
el numero de filas y columnas, llenarla de numeros 
aleatorios, coipiar el contenido a otra matriz y por ultimo
mostrarla en pantalla */
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n[100][100], f, c;
    cout << "Numero de filas: "; cin >> f;
    cout << "Numero de columnas: "; cin >> c;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            n[i][j] = 1 + rand() % (100);
        }
    }
    int m[f][c];
    cout << "\nLa matriz es" << endl;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            m[i][j] = n[i][j];
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}