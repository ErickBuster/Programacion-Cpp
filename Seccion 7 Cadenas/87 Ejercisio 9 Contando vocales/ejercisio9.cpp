/*Realice un programa 
que lea una cadena de caracteres de la entrada 
estandar y muestre en la salida estandar cuantas
ocurrencias de cada vocal existen en la cadena */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[50];
    cout << "Ingrese una oracion: ";
    cin.getline(n,50,'.');
    int a = 0,e = 0,ii = 0,o = 0,u = 0;
    strlwr(n);
    cout << n << endl;
    for(int i = 0; i < strlen(n); i++){
        switch (n[i]){
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            ii++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    }
    cout << "Vocal a: " << a << endl;
    cout << "Vocal e: " << e << endl;
    cout << "Vocal i: " << ii << endl;
    cout << "Vocal o: " << o << endl;
    cout << "Vocal u: " << u << endl;
    return 0;
}