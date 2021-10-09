/*paso de parametros de tipo vector

parametros de la funcion:
    void nombreDeFuncion(tipo nombreArreglo[], int tamanio arreglo)
llamada a la funcion
    nombreDeFuncion(nombreArreglo, tamanioArreglo)
*/
//cuadrados de los elementos del vector
#include <iostream>
#include <math.h>
using namespace std;

void elevarCuadrado(int vec[], int tam);
void mostrarDatos(int vec[], int tam);

int main(){
    const int tamanio = 5;
    int vector[tamanio] = {1,2,3,4,5};
    elevarCuadrado(vector, tamanio);
    mostrarDatos(vector, tamanio);
    return 0;
}

void elevarCuadrado(int vec[], int tam){
    for(int i = 0; i < tam; i++){
        vec[i] = pow(vec[i],2);
    }
}
void mostrarDatos(int vec[], int tam){
    for(int i = 0; i < tam; i++){
        cout << vec[i] <<" ";
    }
}