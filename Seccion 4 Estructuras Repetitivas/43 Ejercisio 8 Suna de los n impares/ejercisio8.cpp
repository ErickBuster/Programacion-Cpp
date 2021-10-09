/*Escriba un programa que calcule el valor de 
1+3+5+...+2n-1*/
#include <iostream>
using namespace std;
int main(){
    int n, r = 0;
    cout << "Ingrese hasta que numero: "; cin >> n;
    for(int i = 1; i <= n; i++){
        r += (2 * i) - 1;
    }
    cout << "la suma es: " << r << endl;
    return 0;
}