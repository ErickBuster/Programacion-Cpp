/*Transmicion de Direcciones
ejemplo: intercambiar el valor de 2 variables */
#include <iostream>
using namespace std;

void intercambio(int *, int *);

int main(){
    int n1 = 20, n2 = 8;
    cout << "Numero 1: " << n1 << endl;
    cout << "Numero 2: " << n2 << endl;

    intercambio(&n1, &n2);
    cout << "\n\nNumero 1: " << n1 << endl;
    cout << "Numero 2: " << n2 << endl;
}

void intercambio(int *dirn1, int *dirn2){
    int aux = *dirn1;
    *dirn1 = *dirn2;
    *dirn2 = aux;
}