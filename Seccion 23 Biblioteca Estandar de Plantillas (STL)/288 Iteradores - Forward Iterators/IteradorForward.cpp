//Iteratodres - Forward iterators
#include <iostream>
#include "agendaTelefonica.h"
#include <vector>
#include <fstream>  // Para archivos
#include <iterator> //Para streams_iterators
using namespace std;
int main(){

    menu();

    ifstream archivo;
    archivo.open("Agenda Telefonica.txt", ios::in);
    if(archivo.fail()){
        cout << "No se puede abrir el archivo";
        exit(1);
    }
    istream_iterator<char> p(archivo);   //iterador para char
    vector<char> frase; //Creando un vector de tipo char
    /* Leer todo el archivo */
    while(!archivo.eof()){//mientras no sea el final de archivo
        frase.push_back(*p); // almancenado el caracter por el que vamor
        p++;    //aunmentamos el iterador
    }
    cout << "\nArchivo pasado al vector" << endl;
    /* mostrando el texto del vector frase */
    for(auto i : frase){
        cout << i;
    }
    archivo.close();
    return 0;
}