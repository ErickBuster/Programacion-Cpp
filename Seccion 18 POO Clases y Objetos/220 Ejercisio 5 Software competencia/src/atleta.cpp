#include <iostream>
using namespace std;
#include "atleta.h"

float Atleta::getTiempoCarrera(){ return tiempo_Carrera; }
void Atleta::mostrarDatos(){
    cout << "Nombre atleta: " << nombre << endl;
    cout << "Numero atleta: " << numero_Atleta << endl;
    cout << "Tiempo Carrera: " << tiempo_Carrera << endl << endl;
}
void pedirDatos(Atleta *cadenaAtletas){
    string nombre;
    int numAtleta;
    float tiempo;

    fflush(stdin);

    cout << "Nombre: "; getline(cin, nombre);
    cout << "Numero atleta: "; cin >> numAtleta;
    cout << "Tiempo carrera: "; cin >> tiempo;
    *cadenaAtletas = Atleta(nombre, numAtleta, tiempo);
}
int Atleta::indiceGanador(Atleta *atletas, int n){
    int indice = 0;
    float tiempoCarrera = atletas->getTiempoCarrera();
    for(int i = 1; i < n; i++){
        if((atletas+i)->getTiempoCarrera() < tiempoCarrera){
            tiempoCarrera = (atletas+i)->getTiempoCarrera();
            indice = i;
        }
    }
    return indice;
}