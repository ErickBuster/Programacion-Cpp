#include <iostream>
using namespace std;
int main(){

    int n[] = {10,4,1,2,5,3,9,8,7,6};
    int i, j, aux, intentos = 0;

    cout << "\tLista desordenada \n";
    for(i = 0; i < 10; i++){
        cout << n[i] << " ";
    }
    cout << endl;

    //Algoritmo metodo burbuja
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(n[j] > n[j+1]){ // numero actual es mayor al siguiente
                aux = n[j];
                n[j] = n[j+1];
                n[j+1] = aux;
                intentos++;
            }
        }
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