/* Hacer un programa que guarde datos de clientes
de un banco, los almacene en cola y por ultimo
muestre los clientes en el orden correcto */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

struct Cliente{
    char nombre[30];
    char clave[10];
    int edad;
};
struct Nodo{
    Cliente persona;
    Nodo *siguiente;
};

void pedirDatosUsuario(Cliente &);
void insertandoDatosEnCola(Nodo *&, Nodo *&, Cliente);
bool colaVacia(Nodo *);
void eliminandoDatosEnCola(Nodo *&, Nodo *&, Cliente &);
void mostradoDatosUsuario(Cliente);
void delay(int);

int main(){
    Nodo *Frente = NULL, *Fin = NULL;
    Cliente persona;
    int opcion, sgundo = 2;
    while (1){
        cout << "\n\tCLIENTES DE UN BANCO " << endl;
        cout << "1. Ingresar datos de un cliente" << endl;
        cout << "2. Mostrar datos de los clientes " << endl;
        cout << "3. Salir " << endl;
        cout << ">>: "; cin >> opcion;
        system("cls");
        switch (opcion){
            case 1:
                fflush(stdin);
                cin.clear();
                cin.ignore();
                pedirDatosUsuario(persona);
                insertandoDatosEnCola(Frente, Fin, persona);
                break;
            case 2:
                cout << "\n\tClientes" << endl;
                while (Frente != NULL){
                    eliminandoDatosEnCola(Frente, Fin, persona);
                    mostradoDatosUsuario(persona);
                }
                cout << endl;
                system("pause");
                break;
            case 3:
            while (Frente != NULL){
                    eliminandoDatosEnCola(Frente, Fin, persona);
                }
                exit(0);
                break;
            default:
                cout << "Opcion incorrecta " << endl;
                break;
        }
        delay(sgundo);
        system("cls");
    }         
    return 0;
}
void pedirDatosUsuario(Cliente &persona){
    cout << "\n\tIngrese sus datos " << endl;
    cout << "Nombre: "; cin.getline(persona.nombre, 30);
    cout << "Clave: "; cin.getline(persona.clave, 10);
    cout << "Edad: "; cin >> persona.edad;
}
void insertandoDatosEnCola(Nodo *&Frente, Nodo *&Fin, Cliente persona){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->persona = persona;
    if(colaVacia(Frente)){
        Frente = nuevo_nodo;
    }else{
        Fin->siguiente = nuevo_nodo;
    }
    Fin = nuevo_nodo;
    cout << "Cliente: " << nuevo_nodo->persona.nombre 
    << " agregado" << endl;
}
bool colaVacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}
void eliminandoDatosEnCola(Nodo *&Frente, Nodo *&Fin, Cliente &Persona){
    Persona = Frente->persona;
    Nodo *aux = Frente;
    if(Frente == Fin){
        Frente = NULL;
        Fin == NULL;
    }else{
        Frente = Frente->siguiente;
    }
    delete aux;
}
void mostradoDatosUsuario(Cliente persona){
    cout << "\nNombre: " << persona.nombre << endl;
    cout << "Clave: " << persona.clave << endl;
    cout << "Edad: " << persona.edad << endl;
} 
void delay(int segundos){
    for(int i = (time(NULL) + segundos); time(NULL) != i;time(NULL)){}
}