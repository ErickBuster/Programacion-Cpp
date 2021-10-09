#include <iostream>
#include <map>  //Map y Multimap
#include <iterator>
#include <algorithm>
using namespace std;

typedef pair<int, string> par; //Creacion de un alias

template<class T>
void mostrarMapa(T &valores){
    cout << "Mostrando datos con for" << endl;
    map<int,string>::iterator it = valores.begin();
    for(it; it != valores.end(); it++){
        cout << "clave: " << it->first << " | Valor: " << it->second << endl;
    }
}

int main(){
    /* Creando map */
    map<int, string> valores;   //creamos una mapa <clave, valor>
        //se ordenan por la clave
    /* InsertarValores en el map */
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(8, "Raul"));
    valores.insert(par(1, "Martin"));
    valores.insert(par(3, "Maria"));
    /* Mostrando map */
    mostrarMapa(valores);
    /* insertar clave duplicada */
    valores.insert(par(1, "Luis")); // lo ignorara ya que la clave 1 ya existe
    mostrarMapa(valores);
    /* Modificar un valor existente */
    valores[1] = "Luis";
    valores[2] = "Juanito"; //insertar valor de otra forma
    mostrarMapa(valores);
    /* Buscar un elemento en map */
    map<int,string>::iterator i = valores.find(3);
    if(i != valores.end()){
        cout << i->second << endl;
    }else{
        cout << "No existe";
    }
    /* Eliminar un elemento */
    valores.erase(5);
    mostrarMapa(valores);

    return 0;
}