/* Realice un programa que pida al usuario el nombre
o ubicacion de un fichero de texto y, a continuacion de 
lectura a todo el fichero */
#include <iostream>
#include <fstream>
using namespace std;

void lecturaArchivo();

int main(){
    lecturaArchivo();
}

void lecturaArchivo(){
    ifstream archivo;
    string ruta_archivo;
    string txt;
    cout << "Ingrese la ruta del archivo: ";
    getline(cin, ruta_archivo);
    archivo.open(ruta_archivo, ios::in);
    if(archivo.fail()){
        cout << "No se encontro el archivo " << endl;
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo, txt);
        cout << txt << endl;
    }
    archivo.close();
}