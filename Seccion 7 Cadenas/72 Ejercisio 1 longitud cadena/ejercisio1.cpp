/*Hacer un programa que pida al usuario que digite una 
cadena de caracteres, luego verificar la longitud de 
la cadena, y si esta supera a 10 caracteres, mostrarla en pantalla
caso contrario no mostrarla*/
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    char palabra[20];

    cout << "Ingrese un palabra (min 10 caracteres): ";
    cin.getline(palabra, 20,'\n');
    if(strlen(palabra) > 10){
        cout << palabra << endl;
    }else{
        cout << "No supera a los 10 caracteres " << endl;
    }
    return 0;
}