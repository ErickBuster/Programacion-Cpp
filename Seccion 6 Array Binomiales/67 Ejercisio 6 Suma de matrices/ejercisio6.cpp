/* Realice un programa que calcule la suma de dos matrices 
de 3x3 */
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n[3][3], m[3][3];
    cout << "\tPrimera Matriz" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            n[i][j] = 1 + rand() % 100;
            m[i][j] = 1 + rand() % 100;
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
    
    cout << "\tSuma de las Matrices " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << m[i][j] + n[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}