#include <iostream>
using namespace std;
int main(){

    int n[] = {10,4,1,2,5,3,9,8,7,6};
    int i, pos, aux, intentos = 0;

    cout << "\tLista desordenada \n";
    for(i = 0; i < 10; i++){
        cout << n[i] << " ";
    }
    cout << endl;

    //Algoritmo metodo insercion
    for(i = 0; i < 10; i++){
        pos = i; // flecha
        aux = n[i];
        while ( (pos > 0) && (n[pos - 1] > aux)){
            n[pos] = n[pos-1];
            pos--;
            intentos++;
        }
        n[pos] = aux;
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