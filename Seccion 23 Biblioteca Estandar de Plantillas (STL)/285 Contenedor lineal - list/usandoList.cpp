/* List -> Lista
    Son los contenedores adecuados cuando se requieren operaciones de
    insercion o eliminacion en cualquier parte de la lista. Estan 
    implementadas como listas doblemente enlazadas, esto es, cada elemento
    (nodo) contiene las direcciones del nodo siguiente y del anterior, ademas
    del valor especdifico almacenado 
    La ventaja de esta implementacion es que la insercion o eliminacion
    de un elemento se reduce a ordenar los punteros del siguiente
    y al anterior de cada nodo. Pero la desventaja es que ya no se puede
    tener acceso aleatorio a los elementos, si no que se tiene un acceso
    secuencial en forma bidireccional. Es decir, se puede recorrer el contenedor
    desde el principio hasta el final o viceversa
    Para poder recorrer listas es necesario utilizar iteradores. Como ya 
    dijimos los iteradores son objetos similares a los punteros, que indica
    una posicion dentro de un contenedor. Todos los contenedores proporcionan
    dos iteradores que establecen el rango del recorrrido: begin y end*/

#include <list>
#include <iostream>
using namespace std;

int main(){
    list <int> datos;
    /* Agregar elementos */
    //2 9 7 1 6
    datos.push_back(7); // Agregamos el elemento al final de la lista
    datos.push_back(1);
    datos.push_back(6);
    datos.push_front(9);    // Agregamos elemento al inicion de la lista
    datos.push_front(2);
    /* Ordenar elementos de menor a mayor */
    datos.sort(); // 1 2 6 7 9

    /* Mostrar elementos */
    list<int>::iterator i;
    for(i = datos.begin(); i != datos.end(); i++){
        cout << *i << " ";
    }
    cout << endl << endl;
    /* Otra forma de mostrar los elementos */
    for(int dato : datos){
        cout << dato << " ";
    }
    cout << endl << endl;

    for(auto d : datos){
        cout << d << " ";
    }
    cout << endl << endl;

    /* Eliminar elementos de la lista*/
    datos.pop_back(); // elimina el ultimo elemento
    datos.pop_front();  //elimina el primer elemento
    for(auto d : datos){
        cout << d << " ";
    }
    cout << endl << endl;
    return 0;
}