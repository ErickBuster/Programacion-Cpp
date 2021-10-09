/* Realice un programa que lea de la entrada estandar numeros hasta
que se introduzca un cero. En ese momento el programa 
debe terminar y mostrar en la salida estandar el numero de 
valores mayores que cero leidos */
#include <iostream>
using namespace std;
int main(){
    int n, cont = 0;
    cout << "Ingresa el numero: " << endl;
    do{
        cout << ">>: "; cin >> n;
        if(n > 0 ){
            cont++;
        }
    }while( n != 0);
    cout << "Numeros mayores a 0 son: " << cont << endl;
    return 0;
}