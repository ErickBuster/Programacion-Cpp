#include <iostream>
#include <fstream>
using namespace std;

void escribir();
void leer();

int main(){
    escribir();
    leer();
}
void escribir(){
    ofstream archivo;
    archivo.open("Posicion.txt" , ios::out);
    if(archivo.fail()){
        cout << "No se pudo crear el archivo " << endl;
        exit(1);
    }
    //saber la posicion del cursor en nuestro archivo
    cout << "Posicion actual del archivo:" <<archivo.tellp() << endl;
    archivo << "Hola que tal?";
    cout << "Posicion actual del archivo:" <<archivo.tellp() << endl;
    //posiciona el cursor en N para escribir apartir de ahi
    archivo.seekp(5);
    archivo << "como estas?";
    cout << "Posicion actual del archivo:" <<archivo.tellp() << endl;
    archivo.close();
}
void leer(){
    ifstream archivo;
    archivo.open("Posicion.txt" , ios::in);
    if(archivo.fail()){
        cout << "No se pudo crear el archivo " << endl;
        exit(1);
    }
    string linea;
    getline(archivo, linea);
    cout << linea << endl;
    //posiciona el cursor en N para leer a partir de ahi
    archivo.seekg(5);
    cout << "posicion actual: " << archivo.tellg() << endl;
    getline(archivo, linea);
    cout << linea << endl;
    cout << "posicion actual: " << archivo.tellg() << endl;

    archivo.close();
}