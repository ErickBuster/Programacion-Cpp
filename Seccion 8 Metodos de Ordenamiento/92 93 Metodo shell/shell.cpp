#include <iostream>
#include <string.h>
using namespace std;

void intercambio(int &x, int &y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}
//algoritmo shell
void ordenacionShell(int a[], int n, int &intentos){
    int salto, i , j, k;
    salto = n/2;
    while(salto > 0){
        for(i = salto; i < n; i++){
            j = i - salto;
            while( j >= 0){
                k = j + salto;
                if(a[j] <= a[k]){ // estan ordenados
                    j = -1;
                }else{ // estan desordenados
                    intercambio(a[j], a[k]);
                    j -= salto;
                    intentos++;
                }
            }
        }
        salto /= 2;
    }
}
int main(){

    int a[] = {10,4,1,2,5,3,9,8,7,6};
    int i, intentos = 0;

    cout << "\tLista desordenada \n";
    for(i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    //Algoritmo metodo shell
    ordenacionShell(a, 10, intentos);


    cout << "Numero de intentos para ordenar: " << intentos << endl;
    //Orden ascendente
    cout << "\tLista ordenada ascendente\n";
    for(i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    //Orden descendente
    cout << "\tLista ordenada descendente\n";
    for(i = 9; i >= 0; i--){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
