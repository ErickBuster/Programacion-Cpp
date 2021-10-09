/*Escriba un programa que lea de la entrada estandar un caracter e indique 
en la salida estanda si el caracter es una vocal minuscula,
es una vocal mayuscula o no es una vocal*/
#include <iostream>
using namespace std;
int main(){
    char c, aux;
    cout << "Ingrese una vocal: "; cin >> c;
    aux = tolower(c);
    switch (aux){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "es una vocal ";
            if(islower(c)){
                cout << "minuscula \n";
            }else{
                cout << "mayuscula \n";
            }
            break;
        default:
            cout << "No es una vocal" << endl;
            break;
    }
}