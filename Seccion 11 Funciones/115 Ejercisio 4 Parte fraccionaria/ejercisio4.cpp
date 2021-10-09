/* escriba un programa que devuelva la parte fraccionaria
de cualquier numero introducido por el usuario
por ejemplo: si se introduce el numero 256.879, deberia 
desplegarse el numero 0.879 */
#include <iostream>
using namespace std;

void pedirDatos();
void fraccionaria();
float numero;

int main(){
    pedirDatos();
    fraccionaria();
    return 0;
}

void pedirDatos(){
    cout << "ingrese el numero: "; cin >> numero;
}
void fraccionaria(){
    int n = numero;
    cout << "la parte fraccionaria es: " << numero - n << endl;
}