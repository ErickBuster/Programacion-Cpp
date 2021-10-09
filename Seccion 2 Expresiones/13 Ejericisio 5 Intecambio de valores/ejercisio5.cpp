/*Escriba un fragmeto de programa que intercambie 
los valores de dos variables */
#include <iostream>
using namespace std;
int main(){
    int x, y , aux;
    cout << "Ingrese el valor de X: ";
    cin >> x;
    cout << "Ingrese el valor de Y: ";
    cin >> y;

    cout << "Cambiando valores \n ";

    aux = x;
    x = y;
    y = aux;

    cout << "El valor de X: " << x;
    cout << "\nEl valor de Y: " << y << endl;

    system("pause");
    return 0;
}