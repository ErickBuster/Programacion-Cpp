/*Relaice una funcion recursiva que sume los primeros
n enteros positivos
Nota: para plantear la funcion recursiva tenga en cuenta
que la suma puede expresarse mediante la siguiente
recurrencia
    suma(n) = 1
        n + suma (n-1) si n = 1
                        si n > 1
*/
#include <iostream>
using namespace std;

int suma(int);

int main (){
    unsigned int numero, sumar;
    cout << "Ingrese hasta que numero sumar: ";
    cin >> numero;
    sumar = suma(numero);
    cout << "La suma es: " << sumar << endl;
    return 0;
}

int suma(int n){
    int sumando = 0;
    if(n == 1){
        sumando = 1;
    }else{
        sumando = n + suma(n - 1);
    }
    return sumando;
}