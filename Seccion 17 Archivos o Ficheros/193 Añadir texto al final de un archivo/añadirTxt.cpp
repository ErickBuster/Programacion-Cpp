#include <fstream>
#include <iostream>
using namespace std;

void agregarTexto();

int main(){
    agregarTexto();
    return 0;
}
void agregarTexto(){
    ofstream archivo;
    string txt;
    archivo.open("archivo.txt", ios::app); //abrimos el archivo en modo añadir texto en el
    if(archivo.fail()){
        cout << "No se pudo abrir el archivo " << endl;
        exit(1);
    }
    cout << "Digite el texto que quiere añadir(0 para terminar):";
    getline(cin, txt, '0');
    archivo << "Hola que tal " << endl;
    archivo << txt << endl;
    archivo.close();
}