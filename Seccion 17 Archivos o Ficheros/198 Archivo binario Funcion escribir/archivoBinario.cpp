#include <iostream>
#include <fstream>
using namespace std;

struct Registro{
    char nombre[20];
    char apellido[20];
};
void escribirBinario();

int main(){
    escribirBinario();
    return 0;
}
void escribirBinario(){
    ofstream archivoBin;
    archivoBin.open("Prueba.dat", ios::out | ios::binary);
    if(archivoBin.fail()){
        cout << "Error al crear el archivo " << endl;
        exit(1);
    }
    Registro persona;
    
    cout << "\tPidiendo datos " << endl;
    cout << "Ingrese el nombre: ";
    cin.getline(persona.nombre, 20);
    cout << "Ingrese el apellido: ";
    cin.getline(persona.apellido, 20);
    // escribimos los datos en el archivo binario
    archivoBin.write((char *)&persona, sizeof(Registro)); //pasamos lo que escribirmos y su tamaño
    archivoBin.close();
}