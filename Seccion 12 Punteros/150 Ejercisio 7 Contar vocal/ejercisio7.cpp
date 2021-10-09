/* Pedir su nombre al usuario y devolver el numero 
de vocales que hay 
Nota: recuerda que debes utilizar punteros */
#include <iostream>
#include <string.h>
using namespace std;

void pedirNombre();
void contarVocales(char *);

char nombre[30];

int main(){
    pedirNombre();
    contarVocales(nombre);
    return 0;   
}

void pedirNombre(){
    cout << "digite su nombre: ";
    cin.getline(nombre, 30);
    strlwr(nombre);
}

void contarVocales(char *nom){
    int contador = 0;
    while(*nom){
        cout << *nom;
        switch (*nom){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contador++;
            break;
        }
        nom++;
    }
    cout << "El numero de vocales es: " << contador << endl;
}