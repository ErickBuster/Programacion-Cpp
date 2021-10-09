/* Hacer un programa que guarde numeros telefonicos
que muestre un menu con las siguientes opciones
    1. Crear(nombre, apellido, telefono)
    2. Agregar mas contactos(Nombre, apellido, telefono)
    3. Visualizar contactos existentes */
#include <fstream>
#include <iostream>
using namespace std;

struct Datos{
    string nombre, apellido, telefono;
}datos;

void menu();
void crearAgenda();
void agregarContactoAgenda();
void leerAgenda();

int main(){
    while (1){
        menu();
    }
    return 0;
}

void menu(){
    int opcion;
    cout << "\t AGENDA TELEFONICA" << endl;
    cout << "1. Crear una nueva agenda " << endl;
    cout << "2. Agregar mas contactos a agenda existente" << endl;
    cout << "3. Mostrar contactos existentes " << endl;
    cout << "0. Salir" << endl;
    cout << ">>: ";
    cin >> opcion;
    system("cls");
    switch (opcion){
    case 1:
        crearAgenda();
        break;
    case 2:
        agregarContactoAgenda();
        break;
    case 3:
        leerAgenda();
        break;
    case 0:
        exit(0);
        break;
    }
    system("pause");
    system("cls");
}
void crearAgenda(){
    ofstream archivo;
    char opcion = 's';
    archivo.open("Agenda Telefonica.txt", ios::out);
    if(archivo.fail()){
        cout << "no se pudo crear el archivo " << endl;
        exit(1);
    }
    archivo << "\tAGENDA TELEFONICA " << endl;
    while (opcion == 's' || opcion == 'S'){
        fflush(stdin);
        cout << "Nombre: "; getline(cin, datos.nombre);
        cout << "Apellido: "; getline(cin, datos.apellido);
        cout << "Telefono: "; getline(cin, datos.telefono);

        archivo << "Nombre: " << datos.nombre << endl;
        archivo << "Apellido " << datos.apellido << endl;
        archivo << "Telefono: " << datos.telefono << endl << endl;

        cout << "\n\tQuiere ingresar otro dato (s | n): ";
        cin >> opcion;
    }
    archivo.close();
}
void agregarContactoAgenda(){
    ofstream archivo;
    char opcion = 's';
    archivo.open("Agenda Telefonica.txt", ios::app);
    if(archivo.fail()){
        cout << "no se pudo crear el archivo " << endl;
        exit(1);
    }
    while (opcion == 's' || opcion == 'S'){
        fflush(stdin);
        cout << "Nombre: "; getline(cin, datos.nombre);
        cout << "Apellido: "; getline(cin, datos.apellido);
        cout << "Telefono: "; getline(cin, datos.telefono);

        archivo << "Nombre: " << datos.nombre << endl;
        archivo << "Apellido " << datos.apellido << endl;
        archivo << "Telefono: " << datos.telefono << endl << endl;

        cout << "\n\tQuiere ingresar otro dato (s | n): ";
        cin >> opcion;
    }
    archivo.close();
}
void leerAgenda(){
    ifstream archivo;
    string txt;
    archivo.open("Agenda Telefonica.txt", ios::in);
    if(archivo.fail()){
        cout << "Error al leer el archivo " << endl;
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo, txt);
        cout << txt << endl;
    }
    archivo.close();
}