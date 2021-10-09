//Lectura de un archivo de texto
#include <fstream>
#include <iostream>
using namespace std;

void lectura();

int main(){
    lectura();
    return 0;
}
void lectura(){
    ifstream archivo;
    string texto;
    archivo.open("archivo.txt", ios::in); //abrimos el archivo en modo lectura
    if(archivo.fail()){
        cout << "No se pudo abir el archivo " << endl;
        exit(1);
    }
    while(!archivo.eof()){//mientras que no sea el final del archivo
        getline(archivo, texto);
        cout << texto << endl;
    }
    archivo.close();
}