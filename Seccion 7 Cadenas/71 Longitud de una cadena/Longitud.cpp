#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char palabra[] = "Hola amigo";
    int longitud = 0;

    longitud = strlen(palabra);
    cout << "La longitud de la cadena es: " << longitud << endl;
    return 0;
}