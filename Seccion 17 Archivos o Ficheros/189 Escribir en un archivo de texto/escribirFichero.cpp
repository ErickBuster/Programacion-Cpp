#include <iostream>
using namespace std;
#include <fstream> //libreria de archivos (creacion, lectura y escritura)

void escribir();

int main(){
    escribir();

    return 0;
}
void escribir(){
    ofstream archivo;
    string nombre_archivo;
    string texto;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombre_archivo);
    cout << "Creando el archivo de texto " << endl;
    archivo.open(nombre_archivo.c_str(), ios::out); // (nombreArchivo, abriend archivo)
                    // si existe, lo remplaza, en caso lo crea
    if(archivo.fail()){// hubo un error al abrir o crear el archivo
        cout << "No se pudo abrir el archivo " << endl;
        exit(1);
    }
    cout << "Ingrese el texto: ";
    getline(cin, texto);
    archivo << "Estamos ingresando un texto .-.!\n";
    archivo << texto << endl;
    archivo.close();
}