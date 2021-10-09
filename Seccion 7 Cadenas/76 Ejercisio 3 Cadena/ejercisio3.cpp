/*Pedir al usuario que digite 2 cadenas de 
caracteres, e indicar si ambas cadenas son 
iguales, en caso de no serlo, indicar cual es 
mayor alfabeticamente */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[20], m[20];
    cout << "Ingrese la primera cadena: ";
    cin.getline(n, 20, '\n');
    cin.getline(m, 20, '\n');
    if(strcmp(n,m) == 0){
        cout << "Las cadenas son iguales " << endl;
    }else if(strcmp(n,m) > 0){
        cout << "La primera cadena es mayor" << endl;
    }else{
        cout << "La segunda cadena es mayor" << endl;
    }
    return 0;
}