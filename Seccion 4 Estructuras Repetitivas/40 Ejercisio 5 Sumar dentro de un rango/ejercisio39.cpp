/*Escriba un programa que lea valores enteros hasta que se 
instroduzca un valor en el rango [20 - 30] o se introduzca
el valor 0. el programa debe entregar la suma de los valores mayores a 0 
introducidos */
#include <iostream>
using namespace std;
int main(){
    int n, suma = 0;
    do{
        cout << ">>: "; cin >> n;
        if(n > 0 ){ suma += n; }
    }while((n < 20 || n > 30) && n != 0);
    cout << "La suma es: " << suma << endl;
    return 0;
}