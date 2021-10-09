/*Rellenar un array de 10 numeros 
, posteriormente utilizando punteros indicar cuales
son numeros pares y su posicion en memoria */
#include <iostream>
using namespace std;
int main(){
    int numeros[10];
    int *p_numeros;
    for(int i = 0; i < 10; i++){
        cout << ">>: ";
        cin >> numeros[i];
    }
    p_numeros = numeros;
    cout << "\tnumeros pares: " << endl;
    for(int i = 0; i < 10; i++){
        if(*p_numeros % 2 == 0){
            cout << *p_numeros << " dir: " << p_numeros <<endl;
        }
        p_numeros++;
    }
    return 0;
}