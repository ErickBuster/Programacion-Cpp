/*intercambiar el valor de 2 variables utilizando paso 
de paramentros por referencia */
#include <iostream>
using namespace std;

void intercambio(int&, int&);

int main(){
    int n1, n2;
    cout << "Ingrese los 2 numeros: ";
    cin >> n1 >> n2;

    intercambio(n1, n2);
    cout << "numero 1 es: " << n1 << endl;
    cout << "numero 2 es: " << n2 << endl;
    return 0;
}

void intercambio(int& x, int& y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}