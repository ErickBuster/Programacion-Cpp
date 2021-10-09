/* Hacer un arreglo de estructura llamada 
atleta para N atletas que contenga los siguientes campos:
nombre, pais, numero_medallas. y devuelve los datos
(nombre, pais) de atleta que ha ganado el mayor numero de 
medallas */
#include <iostream>
using namespace std;

struct atleta
{
    char nombre[20];
    char pais[20];
    int numero_medallas;
}atletas[20];

int main(){
    int nA;
    int mayor = 0, pos;
    cout << "numero de atletas: "; cin >> nA;

    for(int i = 0; i < nA; i++){
        fflush(stdin);
        cout << "Nombre: ";
        cin.getline(atletas[i].nombre,20);
        cout << "Pais: ";
        cin.getline(atletas[i].pais,20);
        cout << "Medallas: ";
        cin >> atletas[i].numero_medallas;
        if(atletas[i].numero_medallas > mayor){
            mayor = atletas[i].numero_medallas;
            pos = i;
        }
    }

    cout << "Atleta con mayores medallas es: " << endl;
    cout << "Nombre: " << atletas[pos].nombre << endl;
    cout << "Pais: " << atletas[pos].pais << endl;
    cout << "Medallas: " << atletas[pos].numero_medallas << endl;
    return 0;
}