//Algoritmos - Iniciando con algorithm
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

template <class iter, class T>
void buscar(iter buscador, iter inicio, iter fin,T valor){
    buscador = find(inicio, fin, valor);
    if(buscador != fin){
        cout << "Valor encontrado en la lista: " << *buscador << endl;
    }else{
        cout << "El valor: " << valor << " No esta en la lista" << endl;
    }
}

int numerosAleatorios(){
    return rand()%10;
}

int main(){
    list<int> valores(10);  //Lista de 10 elementos enteros
    /* generate: Funcion que genera numeros aleatorios en un rango de la lista*/
    // generate(valores.begin(), valores.end(), rand);
    generate(valores.begin(), valores.end(), numerosAleatorios);
    /* mostrar datos */
    ostream_iterator<int> salida(cout, "|");    //mostrar por pantalla valores enteros
                //donde el interador es de tipo int, llamado salida(cout que es para mostrar, la forma de separar los datos)
    //copy: Funcion de algorithm para copiar datos de un contenedor a un iterador
    copy(valores.begin(), valores.end(), salida); 
    
    cout << endl << endl;

    /* Buscar la primera aparicion del numero 8 en la lista */
    list<int>::iterator buscador;   //creando un iterador
    //find: Funcion de algorithm para buscar valores en contenedor
    buscador = find(valores.begin(), valores.end(), 8); //retorna un iterador

    //Analizamos si buscador no sobrepasa los rangos de la lista
    //con una funcion que acabo de hacer
    buscar(buscador, valores.begin(), valores.end(), 8);
    buscar(buscador, valores.begin(), valores.end(), 2.8);
    buscar(buscador, valores.begin(), valores.end(), 4);

    
    cout << endl << endl;
    return 0;
}