//Paso por paramentros por referencia
#include <iostream>
using namespace std;

void valNuevo(int&, int&);

int main(){
    int num1, num2;
    cout << "Digite 2 numeros: ";
    cin >> num1 >> num2;
    valNuevo(num1, num2);
    cout << "Nuevo valor del primer numero es: " << num1 << endl;
    cout << "Nuevo valor del segundo numero es: " << num2 << endl;
    return 0;
}

void valNuevo(int& x, int& y){
    cout << "El valor del primer numero es: " << x << endl;
    cout << "su direccion es: " << &x << endl;
    cout << "El valor del segundo numero es: " << y << endl;
    cout << "su direccion es: " << &y << endl;

    x = 89; y = 50;
}