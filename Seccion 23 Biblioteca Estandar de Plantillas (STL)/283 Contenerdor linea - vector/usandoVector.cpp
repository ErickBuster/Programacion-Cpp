/* Vector:
    Representa al arreglo clasico de elementos, en donde todos los 
    contendios estan contiguos en la memoria. Esta caracteristica permite
    mayor velocidad de acceso a los elementos debido a que para acceder
    a cualquiera de ellos, solo se debe calcular la posicion relativa
    al primer elemento 
    7 9 1 5 10 ...  elementos
    0 1 2 3 4 posicion
    */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numeros;    // arreglo de enteros
    numeros.push_back(7); //Agrega elementos al final del arreglo
    numeros.push_back(9);
    numeros.push_back(1);
    numeros.push_back(5);
    numeros.push_back(10);
    //mostrar los elemtentos del arreglo
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }
    cout << endl << endl;
    for(int i : numeros){
        cout << i << " ";
    }
    cout << endl << endl;
    for(auto i : numeros){
        cout << i << " ";
    }
    cout << endl  << endl;
/*  Otra forma
    vector<int> numeros2(10);
    numeros2[0] = 3;
    numeros2[1] = 2;
    numeros2[2] = 1;
    numeros2[3] = 8;
    numeros2[4] = 9;
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros2[i] << " ";
    }
    cout << endl << endl;*/

    //Eliminando elementos de un arreglo
    //metodo 1
    numeros.pop_back(); //elimina el ultimo elemento del arreglo
    numeros.erase(numeros.begin()+1, numeros.begin()+3); //Elimina la posicion 1 hasta la posicion 2(+3-1)
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    /* modificar un elemento */
    numeros[0] = 15;
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }
    return 0;
}