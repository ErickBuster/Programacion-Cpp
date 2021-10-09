/* realice una funcion que tome como parametros un vecto
de numeros entereos y devuelva la suma de sus 
elementos */
#include <iostream>
using namespace std;

int sumaVector(int vec[], int tam);
void mostrarDatos(int);

int main(){
    const int tamanio = 5;
    int vector[tamanio] = {1,2,3,4,5}, suma = 0;
    suma = sumaVector(vector, tamanio);
    mostrarDatos(suma);
    return 0;
}

int sumaVector(int vec[], int tam){
    int sumar = 0;
    for(int i = 0; i < tam; i++){
        sumar += vec[i];
    }
    return sumar;
}
void mostrarDatos(int sum){
    cout << "La suma es: " << sum << endl;
}