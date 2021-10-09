/*Comprobar si un caracter es una vocal negativa */
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char c;
    cout << "Ingrese una vocal: ";
    cin >> c;
    if(isalpha(c) && islower(c)){
        switch (c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "es una vocal minuscula" << endl;
            break;
        default:
            cout << "No es una vocal" << endl;
            break;
        }
    }else{
        cout << "No es una letra alfabetica \n o no esta en minuscula" << endl;
    }
    return 0;
}