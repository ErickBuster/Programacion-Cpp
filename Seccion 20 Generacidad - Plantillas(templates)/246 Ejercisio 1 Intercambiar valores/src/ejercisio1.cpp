/* Ejercisio 1 
    Definir una plantilla de un archivo de cabecera
    llamado "intercambio.h" que pueda intercambiar el valor
    de dos elementos del mismo tipo*/
#include "intercambio.h"
int main(){
    int n1 = 5, n2 = 10;
    float f1 = 15.65, f2 = 98.515;
    char c1 = 'f', c2 = 'q';
    
    cout << "dato 1: " << n1 << "\ndato2: " << n2 << endl;
    intercambiar(n1, n2);
    cout << "dato 1: " << n1 << "\ndato2: " << n2 << endl << endl;
    
    cout << "dato 1: " << f1 << "\ndato2: " << f2 << endl;
    intercambiar(f1, f2);
    cout << "dato 1: " << f1 << "\ndato2: " << f2 << endl << endl;

    cout << "dato 1: " << c1 << "\ndato2: " << c2 << endl;
    intercambiar(c1, c2);
    cout << "dato 1: " << c1 << "\ndato2: " << c2 << endl << endl;
    return 0;
}