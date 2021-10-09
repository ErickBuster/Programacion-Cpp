/* Rellenar un arreglo con n numeros, posteriormente 
utilizando punteros determinar el menor elemento del
arreglo */
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
    int numMenor = *p_numeros;
    p_numeros++;
    for(int i = 1; i < 10; i++){
        if(*p_numeros < numMenor){
            numMenor = *p_numeros;
        }
        p_numeros++;
    }
    
            cout << "numero menor: " << numMenor  <<endl;
    return 0;
}