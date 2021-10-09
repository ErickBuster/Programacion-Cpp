/* Funciones de posicionamiento - escritura
    seekp() & tellp() */
#include <iostream>
#include <fstream>
using namespace std;

void escribir();

int main(){
    escribir();
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