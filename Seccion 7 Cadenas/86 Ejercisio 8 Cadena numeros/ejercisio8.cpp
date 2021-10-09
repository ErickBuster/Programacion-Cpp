/* Pedir al usuario de caracteres de numeros, uno entero y 
el otro real, convertirlos a sus respectivos valores y
por ultimon sumarlos */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[20], m[20];
    int n1;
    float m1;
    cout << "Ingrese un valor entero: ";
    cin.getline(n,20,'\n');
    cout << "Ingrese un valor real: ";
    cin.getline(m,20,'\n');
    n1 = atoi(n);
    m1 = atof(m);

    cout << "La suma es " << n1 + m1 << endl;
    return 0;
}