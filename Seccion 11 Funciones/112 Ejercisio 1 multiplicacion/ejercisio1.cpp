/* Escriba un funcion llamada mult, que acepte dos numeros
en punto flotante como parametros, 
multiplique estos dos numeros y despliegue el resultado*/
#include <iostream>
using namespace std;

void pedirDatos();
void mult(float, float);

float n1, n2;

int main(){
    
    pedirDatos();
    mult(n1, n2);
    return 0;
}

void pedirDatos(){
    cout << " Ingrese los 2 numeros: ";
    cin >> n1 >> n2;
}
void mult(float x, float y){
    cout << "Multiplicacion " << x * y << endl;
}