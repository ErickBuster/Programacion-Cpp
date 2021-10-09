/* Hacer un menu que considere las siguientes opciones
    1. Cubo de un numero
    2. numero par o impar
    3. salir
    */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, op;
    while (1)
    {
        cout << "\nIngrese la opcion deseada \n";
        cout << "1. El cubo de un numero \n";
        cout << "2. Numero par o impar \n";
        cout << "3. Salir \n";
        cout << ">> "; cin >> op;

        switch (op)
        {
        case 1:
            cout << "Ingrese el numero: "; cin >> n;
            cout << "El valor es: " << pow(n,3) << endl;
            break;
        case 2:
            cout << "Ingrese el numero: "; cin >> n;
            cout << (n % 2 == 0 ? "Par" : "Impar" ) << endl;
            break;
        case 3:
            cout << "Hasta luego " << endl;
            exit(0);
            break;
        default:
            cout << "Opcion incorrecta" << endl;
            break;
        }
    }
    return 0;
}