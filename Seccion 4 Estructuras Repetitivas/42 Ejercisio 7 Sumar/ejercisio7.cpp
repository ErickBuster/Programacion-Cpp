/*escriba un programa que calcule el valor de 1+2+3+...+n*/
#include <iostream>
using namespace std;
int main(){
    int n, r = 0;
    cout << "ingrese hasta que numero sumar: "; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        r += i;
    }
    cout << "La suma es: " << r << endl;
    return 0;
}