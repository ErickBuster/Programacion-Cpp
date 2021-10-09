/* Escriba un programa que calcule el valor 
de la suma de 2^n */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, r = 0;
    cout << ">> "; cin >> n;
    for(int i = 1; i <= n; i++){
        r += pow(2, i);
    }
    cout << "El resultado es: " << r << endl;
}