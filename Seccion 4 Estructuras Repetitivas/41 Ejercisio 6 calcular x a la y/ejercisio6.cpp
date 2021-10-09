/* Escriba un programa que calcule x^y, donde tanto
X  como Y son enteros positivos, sin utilizar la funcion
pow */
#include <iostream>
using namespace std;
int main(){
    int x, y, r = 1;
    cout << "Ingrese el valor de X y de Y: ";
    cin >> x >> y;
    for(y; y > 0; y--){
        r *= x;
    }
    cout << "El valor es: " << r << endl;
    return 0;
}