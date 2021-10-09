/* realice un programa que calcule la descomposicion en factores primos de un numero entero */
#include <iostream>
using namespace std;
int main(){
    int n , p = 2;
    cout << "Ingrese el numero: "; cin >> n;
    while(n != 1){
        if(n % 2 == 0){
        cout << "2 ";
        n /= 2;
        }else{
            int aux = (2 * p) - 1;
            if(n % aux == 0){
                cout << aux << " ";
                n /= aux;
            }else{
                p++;
            }
        }
    }   
    return 0;
}