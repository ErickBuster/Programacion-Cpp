/*Ejercisio 1:
    Considere la siguiente relacion de herencia. Defina 
    las clases Mamifero, Felino y GatoDomestico. Decida 
    que atributos y metodos incluir de tal manera que 
    su programa pueda:
    1. Declarar un objeto llamado minino de tipo 
    GatoDomestico y otro llamado estrellaCirco de tipo Felino
    2. Imprimir la dieta de minino y de estrellaCirco
    3. Imprimir el año y lugar de nacimiento de minino y 
    de estrellaCirco
    4. Cambiar el nombre del dueño minino
    5. imprimir la raza de minino y de estrellaCirco
    6. Cambiar el nombre del circo en el que actual
    estrellaCirco 
    Driagrama de Clases
        Mamifero
    -año nacimiento : int
    -lugar nacimiento : string
    -raza : string
    +Mamifero(int, string, string)
    virtual +imprimirDieta() : string
    getAnioNacimiento() : int
    getLugarNacimiento() : string
    getRaza() : string
            ^
            |
        Felino  
    -nombreCirco : string
    +Felino(int, string, string, string)
    Felino(int, string, string)
    +imprimirDieta() : string // heredada
    +setNombreCirco() : void
    +getNombreCirco() : string
            ^
            |
        GatoDomestico
    -nombreDueño : string
    +GatoDomestico(int, string, string, string)
    +imprimirDieta() : string // heredada
    +setGatoDomestico() : void
    +getGatoDomestico() : string
    */ 
#include <iostream>
#include "Mamifero.h"
#include "Felino.h"
#include "GatoDomestico.h"
using namespace std;
int main(){
    GatoDomestico *minino = new GatoDomestico(2018, "Ciudad de Mexico","Persa", "Juan Manuel");
    Felino *estrellaCirco = new Felino(2012, "Turquia", "Gato Montez", "Los 3 Hermanos");

    cout << "\tDietas" << endl;
    cout << "Gato: " << minino->imprimirDieta() << endl;
    cout << "Felino: " << estrellaCirco->imprimirDieta() << endl << endl;

    cout << "\tFecha y lugar nacimiento" << endl;
    cout << "Gato: " << minino->getAnioNacimiento() << " - " << minino->getLugarNacimiento() << endl;
    cout << "Felino: " << estrellaCirco->getAnioNacimiento() << " - " << estrellaCirco->getLugarNacimiento() << endl << endl;

    string nombre;
    cout << "Duenio del gato: " << minino->getNombreDuenio() << endl;
    cout << "Cula es el nombre del duenio de minino?: ";
    getline(cin, nombre);
    minino->setNombreDuenio(nombre);
    cout << "Nuevo duenio del gato: " << minino->getNombreDuenio() << endl << endl;

    cout << "\tRaza" << endl;
    cout << "Gato: " << minino->getRaza() << endl;
    cout << "Felino: " << estrellaCirco->getRaza() << endl << endl;

    cout << "Nombre del circo: " << estrellaCirco->getNombreCirco() << endl;
    cout << "Ingrese el circo: ";
    getline(cin, nombre);
    cout << "Nombre del circo: " << estrellaCirco->getNombreCirco() << endl << endl;

    delete minino;
    delete estrellaCirco;
     return 0;
}