/* Escribe un programa que lea de la entrada estandar el 
precio de un producto y muestre en la salida estandar el 
precio del producto al aplicarle el IVa*/
#include <iostream>
using namespace std;

int main(){
    float producto, iva;
    cout << "Ingrese el valor del producto: ";
    cin >> producto;
    cout << "\nIngrese el valor del IVA a aplicarle: ";
    cin >> iva;

    producto = producto * (1 + (iva / 100));
    cout << "El valor aplicado es: " << producto << endl;


    system("pause");
    return 0;    
}