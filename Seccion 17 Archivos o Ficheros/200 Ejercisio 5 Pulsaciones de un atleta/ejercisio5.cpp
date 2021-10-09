/* Crear un archivo binario donde almacenar un registro
que contenga las pulsaciones de un atleta en una determinada
hora, el programa debe tener un menu con las siguientes opciones
    1. comenzar a digitar las pulsaciones
    2. añadir mas pulsaciones
    3. Mostrar las pulsaciones registradas
    4. Salir
*/
#include <fstream>
#include <iostream>
using namespace std;
struct Registro{
    float hora;
    int pulsaciones;
};
void menu();
void escribirPulsacion();
void agregarPulsacion();
void mostrarPulsacion();

int main(){
    while(1){ menu(); }
    return 0;
}
void menu(){
    int opcion;
    cout << "1. comenzar a digitar las pulsaciones " << endl;
    cout << "2. añadir mas pulsaciones " << endl;
    cout << "3. Mostrar las pulsaciones registradas " << endl;
    cout << "0. Salir" << endl;
    cout << ">>: ";
    cin >> opcion;
    switch(opcion){
        case 1:
            escribirPulsacion();
            break;
        case 2:
            agregarPulsacion();
            break;
        case 3:
            mostrarPulsacion();
            break;
        case 0:
            exit(0);
            break;
    }
    system("pause");
    system("cls");
}
void escribirPulsacion(){
    ofstream archivoBin;
    archivoBin.open("Pulsaciones.dat", ios::out | ios::binary);
    if(archivoBin.fail()){
        cout << "Error al crear el archivo " << endl;
        exit(1);
    }
    Registro pulso;
    cout << "Digite la hora: "; cin >> pulso.hora;
    cout << "Numero de pulsaciones: "; cin >> pulso.pulsaciones;

    archivoBin.write((char *)&pulso, sizeof(Registro));
    archivoBin.close();
}
void agregarPulsacion(){
    ofstream archivoBin;
    archivoBin.open("Pulsaciones.dat", ios::app | ios::binary);
    if(archivoBin.fail()){
        cout << "Error al abrir el archivo " << endl;
        exit(1);
    }
    Registro pulso;
    cout << "Digite la hora: "; cin >> pulso.hora;
    cout << "Numero de pulsaciones: "; cin >> pulso.pulsaciones;
    archivoBin.write((char *)&pulso, sizeof(Registro));
    archivoBin.close();
}
void mostrarPulsacion(){
    ifstream archivoBin;
    archivoBin.open("Pulsaciones.dat", ios::in | ios::binary);
    if(archivoBin.fail()){
        cout << "Error al abrir el archivo " << endl;
        exit(1);
    }
    cout << "\tMostrando las pulsaciones " << endl;
    Registro Pulso;
    while(!archivoBin.eof()){
        archivoBin.read((char *)&Pulso, sizeof(Registro));
        if(!archivoBin.eof()){
            cout << "Hora: " << Pulso.hora << endl;
            cout << "Pulso: " << Pulso.pulsaciones << endl << endl;
        }
    }
    archivoBin.close();
}