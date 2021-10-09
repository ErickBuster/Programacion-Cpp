/* Deque (Doble cola) 
    Esta es una estructura de datos que representa a una cola con doble 
    final. Este contenedor es similar ya que sus elementos tambien estan 
    contiguos en memoria. La diferencia principal radica en que al tener 
    doble final se pueden insertar elementos por ambor extremos del contenedor
    ... 7 9 1 5 10 ...
        0 1 2 3 4   posicion*/
#include <deque>
#include <iostream>
using namespace std;

int main(){
    deque<char> letras;
    // A B C D
    letras.push_front('C'); //Agregamos un elemento por el principio
    letras.push_front('B');
    letras.push_front('A');
    letras.push_back('D');  //Agregamos un elemento por el final
    letras.push_back('E');

    /* mostrando el deque */
    for(int i = 0; i < letras.size(); i++){
        cout << letras[i] << " ";
    }

    /* eliminando elementos */
    letras.pop_back();  // Eliminando el ultimo elemento
    letras.pop_front(); //Elimina el primero elemento 
    cout << endl << endl;
    /* mostrando el deque */
    for(int i = 0; i < letras.size(); i++){
        cout << letras[i] << " ";
    }

}