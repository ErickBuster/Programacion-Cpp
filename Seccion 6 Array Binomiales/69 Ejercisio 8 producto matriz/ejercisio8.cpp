/* Realice un programa que calcule el producto 
de dos matrices cuadradas de 3x3*/
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n[3][3], m[3][3], x[3][3];
    cout << "\tPrimera Matriz" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            n[i][j] = 1 + rand() % 15;
            m[i][j] = 1 + rand() % 10;
            cout << n[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\tSegunda Matriz " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\tProducto de las Matrices " << endl;
    for(int e = 0; e < 3; e++){
        for(int i = 0; i < 3; i++){
            x[e][i] = 0;
            for(int j = 0; j < 3; j++){
                x[e][i] += n[e][j] * m[j][i];
            }
            cout << x[e][i] << " ";
        }
        cout << endl;
    }
    

    return 0;
}