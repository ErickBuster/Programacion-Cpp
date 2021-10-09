/*Ejercisio 3
    Crear un programa para simular un equipo de futbol(fultbolistam entrador
    y doctor) para lo cual tendremos los siguiente:
        -Una clase base Persona , que tendra los siguientes datos: nombre,
        apellido y edad.
        -La clase derivada Futbolista tendra los siguientes datos: dorsal
        y posicion
        -La clase derivada Entrenador tendra de dato la estrategia que utiliza
        -La clase derivada Medico, la titulacion y los años de experiencia
    Hacer un menu donde se tengan las siguientes opciones:
        -Viaje en equipo
        -Entrenamiento
        -Partido de futbol
        -Planificar el entrenamiento
        -Entrevista
        -Curar Lesion
(Herencia - Clases abstractas, fun virtuales y Polimorfismo)
    Diagrama de clases
        Persona - > Clase Abstracta
            #nombre : string # -> protected
            #apellido : string
            #edad :  int
            +Persona(string, string , int)
            +viajar() : void
            virtual +partidoFutbool : void
            virtual +entrenamiento : void
    clases derivadas::
        Futbolista
            -dorsal : int
            -posicion : string
            +entrevista() : void
        Entrenador
            -estrategia : string
            +planificarEntrenamiento() : void
        Medico
            -titulacion : string
            -aniosExperiencia : int
            +curarLesion() : void*/
#include <iostream>
#include "PersonaDatos.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"
using namespace std;

void menu();
void opcionesMenu(int);
void viajeEquipo();
void entrenamiento();
void partidoFutbol();
void planEntrenamiento();
void entrevista();
void curarLesion();
void mostrarDato(int);

PersonaDatos *equipo[4];

int main(){
    equipo[0] = new Futbolista("luis rangel", "Martinez", 25, 7, "Defensa");
    equipo[1] = new Futbolista("Manuel", "Arreola" , 27, 10, "Delantero");
    equipo[2] = new Entrenador("Maximiliano", "Sanchez", 48, "Defensiva");
    equipo[3] = new Medico("Alex", "Marroni", 59, "Fisioterapeuta", 20);
    
    while (1){
        menu();
    }
    return 0;
}
void menu(){
    int opcion;
    cout << "\tMENU EQUIPO FUTBOL" << endl;
    cout << "1. Viaje en equipo" << endl;
    cout << "2. Entrenamiento" << endl;
    cout << "3. Partido de futbol" << endl;
    cout << "4. Planificar el entrenamiento" << endl;
    cout << "5. Entrevista" << endl;
    cout << "6. curar lesion" << endl;
    cout << "0. Salir" << endl;
    cout << ">>: "; cin >> opcion;
    system("cls");
    opcionesMenu(opcion);
}
void opcionesMenu(int opcion){
    switch (opcion){
        case 1: // Viaje en equipo
            viajeEquipo();
            break;
        case 2: // Entrenamiento
            entrenamiento();
            break;
        case 3: // Partido de fulbol
            partidoFutbol();
            break;
        case 4: // Planificar el entrenamiento
            planEntrenamiento();
            break;
        case 5: // Entrevista
            entrevista();
            break;
        case 6: // Curar Lesion
            curarLesion();
            break;
        case 0: // Salir
            exit(0);
            break;
    }
    cout << endl << endl;
    system("pause");
    system("cls");
}
void mostrarDato(int i){
    cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
}
void viajeEquipo(){
    cout << "\tViaje de equipo" << endl;
    for(int i = 0; i < 4; i++){
        mostrarDato(i);
         equipo[i]->viajar();
    }
}
void entrenamiento(){
    cout << "\tEquipo Entrenando" << endl;
    for(int i = 0; i < 4; i++){
        mostrarDato(i);
        equipo[i]->entrenamiento();
    }
}
void partidoFutbol(){
    cout << "\tEquipo en partido de futbol" << endl;
    for(int i = 0; i < 4; i++){
        mostrarDato(i);
        equipo[i]->partidoFutbol();
    }
}
void planEntrenamiento(){
    cout << "\tPlan de entrenamiento" << endl;
    mostrarDato(2); 
    ((Entrenador*)equipo[2])->planificarEntrenamiento(); // Es un down Casting
            // una dorma descendiente entre clases, ya que si coloco
        //equipo[2]->planificarEntrenamiento(); me marcara un error ya que no pertenece a la clase Persona
}
void entrevista(){
    cout << "\tEntrevista" << endl;
    for(int i = 0; i < 2; i++){
        mostrarDato(i);
        ((Futbolista * )equipo[i])->entrevista(); // Otro down casting
    }
}
void curarLesion(){
    cout << "\tCurar Lesiones" << endl;
    mostrarDato(3);  
    ((Medico * )equipo[3])->curarLesion();
}