/* pedir al usuario una cadena de caracteres
almacenarla en un arreglo y copar todo
su contenido haci otro arreglo de caracteres*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[100], m[100];
    cout << "Ingresa una cadena: ";
    cin.getline(n,99,'.');
    strcpy(m, n);
    cout << m << endl;
}