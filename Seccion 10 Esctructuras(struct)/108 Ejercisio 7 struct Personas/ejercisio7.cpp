/* defina una estructura que indique el tiempo
empleado por un ciclista en una etapa. la estructura
debe tener tres campos: horas, minutos y segundos. 
escriba un programa que dado n etapas calcle el tiempo
total empleado en correr todas las etapas */
#include <iostream>
using namespace std;

struct Etapas{
    int horas, minutos, segundos;
}etapa[20];

int main(){
    int nEtapas, hr = 0, min = 0, seg = 0;
    cout << "Numero de etapas: "; cin >> nEtapas;
    for(int i = 0; i < nEtapas; i++){
        cout << "Numero de Horas: ";
        cin >> etapa[i].horas;
        cout << "Numero de Minutos: ";
        cin >> etapa[i].minutos;
        cout << "Numero de Segundos: ";
        cin >> etapa[i].segundos;

        hr += etapa[i].horas;
        min += etapa[i].minutos;
        seg += etapa[i].segundos;
        if(min >= 60){
            min -= 60;
            hr ++;
        }if(seg >= 60){
            seg -= 60;
            min ++;
        }
    }

    cout << "\ttiempo total empleado" << endl;
    cout << "Numero de Horas: " << hr << endl;
    cout << "Numero de Minutos: " << min << endl;
    cout << "Numero de Segundos: " << seg << endl;
}