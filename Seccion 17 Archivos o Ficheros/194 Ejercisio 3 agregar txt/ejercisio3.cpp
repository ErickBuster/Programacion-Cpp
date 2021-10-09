/* Realice un programa que pida al usuario el nombre
o ubicacion de un fichero y a continuacion añada texto
en el hasta que el usuario lo decida */
#include <iostream>
#include <fstream>
using namespace std;

void agregarTxt();
int main(){
    agregarTxt();
    return 0;
}
void agregarTxt(){
    ofstream archivo;
    string nombre_archivo, texto;
    cout << "Ingrese el nombre o ruta del archivo: ";
    getline(cin, nombre_archivo);
    archivo.open(nombre_archivo.c_str(), ios::app);
    if(archivo.fail()){
        cout << "Error al intentar abrir el archivo " << endl;
        exit(1);
    }
    cout << "\nIngrese el texto (0 para terminar): ";
    getline(cin, texto, '0');
    archivo << texto << endl;
    archivo.close();
    cout << "\tTexto agregado correctamente " << endl;
}