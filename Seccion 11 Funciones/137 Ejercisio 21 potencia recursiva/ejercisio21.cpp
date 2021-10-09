/* Escriba una funcion recursiva que calcule un 
numero elevado a una potencia enterea mayor o igual
que cero: x^y */
#include <iostream>
using namespace std;

int potencia(int, int);

int main(){
    int base, exponente;
    cout << "Ingrese la base: ";cin >> base;
    cout << "Ingrese la potencia: "; cin >> exponente;

    cout << base << "^" << exponente << "= " << potencia(base,exponente) << endl;
    return 0;
}

int potencia(int x, int y){
    int pot;
    if(y == 1){
        pot = x;
    }else{
        pot = x * potencia(x, y-1);
    }
    return pot;
}