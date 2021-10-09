/* pedir su nombre al usuario en mayuscula,
si su nombre comienza por la letra A, convertir su nombre
en minusculas, caso contrario no convertir */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[20];
    cout << "ingresa tu nombre: ";
    cin.getline(n,20,'\n');
    (strncmp(n,"A", 1) == 0) ? strlwr(n) : strupr(n);
    cout << n << endl;
    return 0;
}