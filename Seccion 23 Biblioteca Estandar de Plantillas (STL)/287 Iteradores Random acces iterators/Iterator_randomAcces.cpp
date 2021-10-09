#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
///Funcion template para mostrar los elementos de un contenedor
template <class Iter>
void mostrarEnPantalla(Iter inicio, Iter final){
    while (inicio != final){
        cout << *inicio << " ";
        inicio++;
    }
    
}
int main(){
    vector<char> letras(10);    //Creando el vector de 10 elementos char 
    
    /* Agregando elementos al vector */
    for(int i = 0; i < 10; i++){
        letras[i] = 'A' + (rand() % 26); //agregando elementos aleatorios al vector
    }
    /* mostrando los elementos del vector */
    mostrarEnPantalla(letras.begin(), letras.end());
    cout << endl;
    /* visualizar los elementos del vetor al reves */
    mostrarEnPantalla(letras.rbegin(), letras.rend());
    cout << endl;
    /* visualizar los elementos del medio del vetor (1 - 8)*/
    mostrarEnPantalla(letras.begin()+1, letras.end()-1);
    cout << endl;
    return 0;
}
