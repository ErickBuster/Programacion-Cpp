/* Realice un programa que pida al usuario el nombre
 de un fichero de texto y, a continuacion permita
 almacenar al usuario tantas frases como el usuario desee
 */
#include <iostream>
#include <fstream>
using namespace std;

void crearArchivo(){
    ofstream archivo;
    string nombre_archivo;
    string txt;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombre_archivo);
    archivo.open(nombre_archivo+=".txt", ios::out);
    if(archivo.fail()){
        cout << "Fallo al crear el archivo " << endl;
        exit(1);
    }
    cout << "Ingrese el texto: (0 para terminar)";
    getline(cin, txt, '0');
    archivo << txt;
    
    archivo.close();
}

int main(){
    crearArchivo();
    return 0;
}