/* Ejercisio 5: Construir un programa para una competencia
de atletismo, el programa debe gestionar una serie de 
atletas caracterizados por su numero de atleta, nombre
y tiempo de carrera, al final el programa debe mostrar
los datos del atleta ganador de la carrera */
#include <iostream>
#include "atleta.h"
using namespace std;
int main(){
    Atleta *atletas;
    int numeroAtletas, indiceatletas;
    cout << "Cual es el numero de atletas que van a competir?: ";
    cin >> numeroAtletas;
    
    atletas = new Atleta[numeroAtletas];

    for(int i = 0; i < numeroAtletas; i++){
        cout << "\tDatos del atleta " << i+1 << endl;
        pedirDatos(atletas+i);
    }
    cout << "\n\n\tTodos los Atletas " << endl;
    for(int i = 0; i < numeroAtletas; i++){
        (atletas+i)->mostrarDatos();
    }

    indiceatletas = Atleta::indiceGanador(atletas, numeroAtletas);
    cout << "\tEl atleta gandor es " << endl;
    (atletas + indiceatletas)->mostrarDatos();

    delete[] atletas;
    return 0;
}
