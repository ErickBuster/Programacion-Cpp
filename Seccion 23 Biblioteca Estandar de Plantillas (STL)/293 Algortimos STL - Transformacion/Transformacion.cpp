//Algoritmos de Transformacion 
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
using namespace std;

/* Funciona para crear archivo con el abcdario */
void creandoArchivo(){
    FILE *file;
    if(file = fopen("abc.txt", "r")){
        fclose(file);
        cout << "el archivo ya existe" << endl;
    }else{
        ofstream archivo("abc.txt", ios::out);
        if(archivo.fail()){
            cout << "Error al crear el archivo" << endl;
            exit(1);
        }
        char letra = 97;
        for(int i = 0; i < 26; i++){
            archivo << letra << " ";
            letra++;
        }
        cout << "Archivo creado" << endl;
        archivo.close();
    }
}   

/* Funciona para llenar el vector */
template <class T>
void llenarVectorArchivo(T &letras){
    ifstream archivo("abc.txt", ios::in);
    if(archivo.fail()){
        cout << "error al intentar abrir el archivo" << endl;
        exit(1);
    }
    copy(istream_iterator<char>(archivo), istream_iterator<char>(), back_inserter(letras));
    cout << "Arreglo lleno" << endl;
}

/* Funcion para mostrar los elemtos del vector */
template <class iter>
void mostrarVector(iter inicio, iter fin){
    /* primera */
    copy(inicio, fin, ostream_iterator<char>(cout, "|"));
    cout << endl << endl;
}
/* Funcion para pasar a mayusculas el vector */
void mayusculas(char &letra){
    if(letra >= 'a' && letra <= 'z'){
        letra = letra - ('a' - 'A');
    }
}

char vocal(char const &letra){
    return (letra == 'A' ||
            letra == 'E' ||
            letra == 'I' ||
            letra == 'O' ||
            letra == 'U') ? letra : '-';
}
int main(){
    vector<char> letras;
    creandoArchivo();

    /* Llenando el vector  */
    llenarVectorArchivo(letras);
    /* Mostrando el vector */
    cout << "Vector ordenado" << endl;
    mostrarVector(letras.begin(), letras.end());
    /* Desordenar vector  */
    cout << "Vector desordenado" << endl;
    random_shuffle(letras.begin(), letras.end());
    mostrarVector(letras.begin(), letras.end());

    /* Mayuscula */
    //Funcion de algorithm
    cout << "Vector en Mayusculas" << endl;
    for_each(letras.begin(), letras.end(), mayusculas); // toma cada elemento del vector
                // y lo pasa por la funcion mayusculas
    mostrarVector(letras.begin(), letras.end());

    /* Mostrar solo las vocales */
    //transform: Funcion de algorithm (inicio, fin, iterador, requerimiento)
    cout << "\tVocales del arreglo" << endl;
    transform(letras.begin(), letras.end(), ostream_iterator<char>(cout,"|"),
        vocal);
    return 0;
}