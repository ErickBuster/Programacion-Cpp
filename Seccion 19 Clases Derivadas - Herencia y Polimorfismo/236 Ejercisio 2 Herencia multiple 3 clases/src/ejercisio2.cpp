/*Considere la siguiente relacion de herencia, 
la cual  involucra tres clases: Alumno, Deportista y
BecadoDeporte. Esta ultima representa a aquellos alumnos
que son deportistas y que por esa razon han recibido
una beca especial del gobierno para premiar sus esfuerzos.
Decida que atribuos y metodos incluir de tal manera que 
su programa pueda:
    1. Declarar dos objetos llamdaso alumnoJuan y alumno Pedro
    de tipo Alumno
    2. Declarar un objeto llamada deporLuis de tipo Deportista
    3. Declarar dos objetos llamados bdAna y bdCarmen de tipo
    BecadoDeportista
    4. Imprimir los datos de todos los objetos declarados
    5. Actualizar el nombre de la carrera que estan estudiando
    alumnoJuan ydbAna. El dato dado por el usuario sera el nombre
    de la nueva carrera
    6.Actualizar el nombre del entrenador deporLuis y bdCarmen. El dato
    dado por el usuario sera el nombre del nuevo entrenador
    7. Actualizar el monto de la beda de bdAna y dbCarmen. El dato
    dado por el usuario sra el porcentaje de incremento de la beca actual*/
#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BecarioDeporte.h"
using namespace std;
int main(){
    Alumno *alumnoJuan = new Alumno("Comunicaciones y Electronica");
    Alumno *alumnoPedro = new Alumno("Electricidad");

    Deportista *deporLuis = new Deportista("Juan Manuel");

    BecarioDeporte *bdAna = new BecarioDeporte("Psicologia", "Juan Manuel", 1000);
    BecarioDeporte *bdCarmen = new BecarioDeporte("Nutricion", "Raul Sanchez", 3000);

    cout << "Juan: "; alumnoJuan->mostrarDatos();
    cout << "Pedro: "; alumnoPedro->mostrarDatos();
    cout << "Luis: "; deporLuis->mostrarDatos();
    cout << "Ana: "; bdAna->mostrarDatos();
    cout << "Carmen: "; bdCarmen->mostrarDatos();

    string nombre;
    cout << "Nombre de la nueva carrera de Juan: ";
    getline(cin, nombre);   alumnoJuan->setNombreCarrera(nombre);
    cout << "Nombre de la nueva carrera de Ana: ";
    getline(cin, nombre);   bdAna->setNombreCarrera(nombre);
    cout << "Nombre del nuevo entrenador de Luis: ";
    getline(cin, nombre);   deporLuis->setNombreEntrenador(nombre);
    cout << "Nombre del nuevo entrenador de Carmen: ";
    getline(cin, nombre);   bdCarmen->setNombreEntrenador(nombre);
    
    float monto;
    cout << "Nuevo monto en porcentaje de Ana: ";   cin >> monto; 
    bdAna->setMontoBeca(monto);
    cout << "Nuevo monto en porcentaje de Carmen: "; cin >> monto;
    bdCarmen->setMontoBeca(monto);

    cout << "Juan: "; alumnoJuan->mostrarDatos();
    cout << "Pedro: "; alumnoPedro->mostrarDatos();
    cout << "Luis: "; deporLuis->mostrarDatos();
    cout << "Ana: "; bdAna->mostrarDatos();
    cout << "Carmen: "; bdCarmen->mostrarDatos();
    
    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete bdCarmen;
    return 0;
}