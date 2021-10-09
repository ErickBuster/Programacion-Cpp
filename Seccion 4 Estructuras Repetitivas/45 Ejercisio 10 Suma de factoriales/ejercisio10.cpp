/* Escriba un programa que calcule el valor de 
suma de factoriales */ 
#include <iostream>
using namespace std;
int main(){
    int n, r = 1, r2 = 0;
    cout << "Ingrese el numero factorial: "; cin >> n;
    for(int i = 1; i <= n; i++){
        r *= i;
        r2 += r;
    }
    cout << "El valor de la suma de factoriales es: " << r2 << endl;
    return 0;
}