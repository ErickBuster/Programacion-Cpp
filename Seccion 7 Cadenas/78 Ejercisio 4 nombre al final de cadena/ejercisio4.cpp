/* Crear una cadena que tenga la siguiente frase 
"Hola que tal", luego crear otra cadena para preguntarle
al usuario su nombre, por ultimo aniadir el nombre al final
de la primera cadena y mostrar el mensaje completo */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[] = "Hola que tal ";
    char m[20];
    cout << "Ingresa tu nombre: ";
    cin.getline(m,20,'\n');

    strcat(n, m);
    cout << n << endl;
}