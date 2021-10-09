/* defina una estructura que sirva para 
representar a un persona. la estructura debe contener
dos campos : el nombre de la persona y un valor de tipo 
logico que indica si la persona
tiene algun tipo de discapacidad. realice un programa
que dado un vector de personas rellene dos nuevos vectores
uno que contenga las personas que no tiene discapacidad
y otro que contenta las personas con discapacidad */
#include <iostream>
#include <string.h>
using namespace std;

struct Persona{
    char nombre[20];
    bool discapacidad;
}personas[20], personasSinD[20], personasConD[20];

int main(){
    int nPersonas, i, j = 0, k = 0;
    cout << "Ingrese el numero de personas: ";
    cin >> nPersonas;

    for(i = 0; i < nPersonas; i++){
        fflush(stdin);
        cout << "Ingrese el nombre: ";
        cin.getline(personas[i].nombre,20, '\n');
        cout << "La persona tiene discapacidad? (1 / 0): ";
        cin >> personas[i].discapacidad;

        if(personas[i].discapacidad){
            strcpy(personasConD[j].nombre, personas[i].nombre);
            j++;
        }else{
            strcpy(personasSinD[k].nombre, personas[i].nombre);
            k++;
        }
    }

    cout << "\t Personas con Discapacidad " << endl;
    i = 0;
    while(i < j){
        cout << personasConD[i].nombre << endl; i++;
    }
    cout << "\t Personas sin Discapacidad " << endl;
    i = 0;
    while(i < k){
        cout << personasSinD[i].nombre << endl; i++;
    }

    return 0;
}

