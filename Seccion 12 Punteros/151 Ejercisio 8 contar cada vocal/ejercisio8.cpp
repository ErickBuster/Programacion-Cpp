/* pedir una cadena de caracteres(string) al usuario
e indicar cuantas veces aparece la vocal a, e, i , o u
en la cadena de caracteres con punteros */
#include <iostream>
#include <string.h>
using namespace std;

void pedirNombre();
void contarVocales(char *);

char nombre[50];

int main(){
    pedirNombre();
    contarVocales(nombre);
    return 0;   
}

void pedirNombre(){
    cout << "digite su nombre: ";
    cin.getline(nombre, 50);
    strlwr(nombre);
}

void contarVocales(char *nom){
    int a = 0,e = 0,i = 0,o = 0,u = 0;
    while(*nom){
        cout << *nom;
        switch (*nom){
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
        nom++;
    }
    cout << "\nEl numero de vocales es " << endl;
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
}