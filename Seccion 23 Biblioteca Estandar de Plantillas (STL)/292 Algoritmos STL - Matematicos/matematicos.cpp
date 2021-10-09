// Algoritmos STL - Matematicos
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <numeric> //Para utilizar la funcion accumulate
using namespace std;

const float RANGO = 20;


float numerosRandom(){
    return ( float(rand())/float((RAND_MAX)) * RANGO);
}
bool par(int i){
    return ((i % 2) == 0);
}
void archivoNumerosFloat(){
    ofstream archivo;
    archivo.open("numeros.txt", ios::out);
    if(archivo.fail()){
        cout << "fallo en la creacion del archivo" << endl;
        exit(1);
    }
    int i = 11;
    float numeroR;
    while(i != 0){
        numeroR = numerosRandom();
        par(i) ? numeroR : numeroR *= (-1);
        cout << numeroR << " ";
        archivo << numeroR << " ";
        i--;
    }
    cout << "\narchivo llenado" << endl << endl;
    archivo.close();
}

template <class T>
void llenarVector(T &numeros){
    //Abrimos el archivo en modo lectura
    ifstream archivo("numeros.txt", ios::in);
    if(archivo.fail()){
        cout << "Fallo al abrir el archivo" << endl;
        exit(1);
    }
    //copiamos todos los elementos del archivo hacia el vector numero
    /* Agregando el texto al vector usando back_inserter(recibe el contenedor)*/
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros));
}

template <class T>
bool positivo(T valor){
    return valor>= 0;
}
template <class T>
bool negativo(T valor){
    return valor < 0;
}

// template <class T>
int main(){
    /* Creando vector */
    vector<float> numeros;
    /* llenando un archivo de txt con floats */
    archivoNumerosFloat();
    /* llenando al vector */
    llenarVector(numeros);
    /* Mostrando los elementos del vector */
    cout << "\tvalores del vector " << endl;
    copy(numeros.begin(),numeros.end(),ostream_iterator<float>(cout, " "));
    cout << endl;

    /* calculamos el maximo y min  de los elementos */
        /* Funcion para calcular el numero maximo */
    cout << "Maximo: " << *max_element(numeros.begin(), numeros.end()) << endl; // retorna un iterador
    cout << "Minimo: " << *min_element(numeros.begin(), numeros.end()) << endl; //  retorna un iterador 

    /* Calcular valor promedio */
    cout << "Promedio de los elementos del vector: ";
    cout << accumulate(numeros.begin(), numeros.end(), 0.0) / numeros.size() << endl; //(inicio, fin, valorCon el que inicia)/tamanio vector

    /* Contar el numero de elemtos positivos */
    cout << "Cantidad numeros positivos: " << 
    count_if(numeros.begin(), numeros.end(), positivo<float>) << endl;

    cout << "Cantidad numeros negativos: " << 
    count_if(numeros.begin(), numeros.end(), negativo<float>) << endl;

    return 0;
}