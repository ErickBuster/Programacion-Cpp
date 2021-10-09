#include <iostream>
using namespace std;
int main(){

    int n[] = {10,4,1,2,5,3,9,8,7,6};
    int i, j, aux, min, intentos = 0;

    cout << "\tLista desordenada \n";
    for(i = 0; i < 10; i++){
        cout << n[i] << " ";
    }
    cout << endl;

    //Algoritmo metodo seleccion
    for(i = 0; i < 10; i++){
        min = i;
        for(j = i + 1; j < 10; j++){
            if(n[j] < n[min]){
                min = j;
                intentos++;
            }
        }
        aux = n[i];
        n[i] = n[min];
        n[min] = aux;
    }

    cout << "Numero de intentos para ordenar: " << intentos << endl;
    //Orden ascendente
    cout << "\tLista ordenada ascendente\n";
    for(i = 0; i < 10; i++){
        cout << n[i] << " ";
    }
    cout << endl;
    //Orden descendente
    cout << "\tLista ordenada descendente\n";
    for(i = 9; i >= 0; i--){
        cout << n[i] << " ";
    }
    cout << endl;
    return 0;
}