/* Escriba un programa que solicite una edad(un entero) e indique en la salida estandar si la edad
introducida esta en el rango de 18 - 25 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese la edad: ";
    cin >> n;
    if(n > 17 && n < 26){
        cout << "Esta dentro del rango de edad " << endl;
    }else{
        cout << "Esta fuera del rango " << endl;
    }
    return 0;
}