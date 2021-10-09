/* ex:
        Dado un numero natural N, obtener la suma de los 
        digitos de que consta.
        Presentar un algoritmo recursivo y otro iterativo
     */
#include <iostream>
using namespace std;

//Solucion recursiva
int sumaRecursiva(int n){
    if(n <= 9){ // caso base
        return n;
    }else{ // caso recursivo 123 = 1 + 2 + 3 = 6
        return sumaRecursiva(n/10) + n % 10;
    }
}
//Solucion Iterativa
int sumaIterativa(int n){
    int suma = 0;
    while(n > 9){
        suma += n % 10;
        n /= 10;
    }
    return suma + n;
}
int main(){
    int numero;
    cout << "Digite un numero: "; cin >> numero;
    cout << "La suma de los digitos del numero es: " << endl;
    cout << "Suma recursiva: " << sumaRecursiva(numero) << endl;
    cout << "Suma iterativo: " << sumaIterativa(numero) << endl; 
    return 0;

}