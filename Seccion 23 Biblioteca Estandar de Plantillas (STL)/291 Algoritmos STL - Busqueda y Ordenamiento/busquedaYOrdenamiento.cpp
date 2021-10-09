//Algoritmos de Busqueda y Ordenamiento
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
/* Funcion para generar valores aleatorios */
int numerosAleatorios(){
    return rand()%30;
}
/* Funcion logica para calcular si es una funcion par */
template <class T>
bool esPar(T valor){
    return ((valor%2) == 0);
}
/* Funcion propia para mostrar el vector */
template <class iter>
void mostrarVector(iter inicio, iter final){
    copy(inicio, final, ostream_iterator<int>(cout, "|"));
    cout << endl;
}

int main(){
    /* BUSQUEDA */
    vector<int> valores(30);
    /* Llenando al vector con numeros aleatorios */
    generate(valores.begin(), valores.end(), numerosAleatorios);

    /* mostrar valores usando iterador y copy */
    cout << "\tArreglo vector valores" << endl;
    // copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, " - "));
    mostrarVector(valores.begin(), valores.end());

    /* Almacenar los numeros pares */
    vector<int> numPares;

    /* Iterador */
    vector<int>::iterator i = valores.begin(); //iterador para recorrer al vector
    //find_if: Algortimo de la biblioteca algorithm
    while( (i = find_if(i, valores.end(), esPar<int>)) != valores.end()){
        /* la funcion find_if busca no solo el primer valore si no varios
        numeros(mientras tengan una coincidencia verdadera), sin importar si se repite find_if(rango inicial, rango final, valor a buscar)*/
        numPares.push_back(*i); // almacena los valores en el nuevo vector
        i++;
    }
    cout << "\tArreglo de numeros Pares "<< endl;
    mostrarVector(numPares.begin(), numPares.end());

    /* ORDENAMIENTO */
    cout << "\tArreglo de numeros Pares Ordenado de menor a mayor"<< endl;
    sort(numPares.begin(), numPares.end());
    mostrarVector(numPares.begin(), numPares.end());

    cout << "\tArreglo de numeros Pares Ordenado de mayor a menor"<< endl;
    sort(numPares.rbegin(), numPares.rend());
    mostrarVector(numPares.begin(), numPares.end());
    
    return 0;
}