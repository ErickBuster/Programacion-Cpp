/*Escribe un programa que lea de la entrada estandar un vector
de numeros en la salida estandar los numeros del vector
con sus indices asociados */
#include <iostream>
using namespace std;
int main(){
    int num[100], n;
    cout << "Cuantos numeros ingresara?: "; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    cout << "\tMostrando los numeros " << endl;
    for(int i = 0; i < n; i++){
        cout << "El numero es: " << num[i] << " en la casilla " << i << endl;
    }
    return 0;
}