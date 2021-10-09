/*Escriba un programa que calcule el valor de un 
numero factorial */
#include <iostream>
using namespace std;
int main(){
    int n, r = 1;
    cout << "Ingrese el numero factorial: "; cin >> n;
    for(int i = 1; i <= n; i++){
        r *= i;
    }
    cout << "El valor es: " << r << endl;
    return 0;
}