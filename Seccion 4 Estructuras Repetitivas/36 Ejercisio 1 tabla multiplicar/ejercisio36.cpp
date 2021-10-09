/* Realice un programa que solicite de la entrada
estandar un entero del 1 al 10 y muestre en la salida 
su tabla de multiplicar */
#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout << "Ingrese el numero (1 - 10): "; cin >> n;
    }while (n < 1 || n > 10);
    
    for(int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}