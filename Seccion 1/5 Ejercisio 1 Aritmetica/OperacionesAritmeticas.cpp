/* Escribe un programa que lea de la entrada estandar dos numeros
y muestre en la salida estandar su suma, resta, multiplicacion y division */
#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "\nIngrese el segundo numero: ";
    cin >> n2;

    cout << "\nSuma: " << n1 + n2 << endl;
    cout << "Resta: " << n1 - n2 << endl;
    cout << "Multiplicacion " << n1 * n2 << endl;
    cout << "Division: " << n1 / n2 << endl;

    system("pause");
    return 0;
}