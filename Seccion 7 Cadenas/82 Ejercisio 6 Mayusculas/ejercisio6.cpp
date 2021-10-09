/* Convertir dos cadenas de minusculas a mayusculas. 
compararlas, y decir si son iguales o no */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[20], m[20];
    cout << "Ingrese la cadena 1: ";
    cin.getline(n,20,'\n');
    cout << "Ingrese la cadena 2: ";
    cin.getline(m,20,'\n');

    strupr(n);
    strupr(m);
    cout << "Las cadenas ";
    cout << ((strcmp(n,m) == 0) ? "son iguales " : "no son iguales ") << endl;
    return 0;
}