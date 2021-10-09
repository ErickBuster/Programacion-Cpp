/*Hacer un programa que calcule el resultadod e la siguiente
expresion:
1 -2 + 3 -4 + 5 - 6...n */
#include <iostream>
using namespace std;
int main(){
    int n, r = 0;
    cout << "Ingrese el numero: "; cin >> n;
    for(int i = 1; i <= n; i++){
        i % 2 == 0 ? r += -i : r += i;
    }
    cout << "La suma es: " << r << endl;
}