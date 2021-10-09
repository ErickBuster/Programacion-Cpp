/* Escriba una funcion llamada al_cuadrado() que
calcule el cuadrado del valor que se le transmite y 
despliegue el resultado. la funcion debera ser capas de
elevera al cuadrado numeros flotantes */
#include <iostream>
#include <math.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float);

float numero;

int main(){
    pedirDatos();
    al_cuadrado(numero);
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero: ";
    cin >> numero;
}

void al_cuadrado(float x){
    cout << "Cuadrado del numero es: " << pow(x,2) << endl;
}

