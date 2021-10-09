/* Defina una estructura que indique el tiempo 
empleado por un ciclista en recorrer una etapa. la
estructura debe tener tres campos: horas, minutos y 
segundos. escriba un programa que dado 3 etapas calcule
el tiempo total empleado en correr todas las etapas
usando punteros */
#include <iostream>
using namespace std;

struct Tiempo{
    int horas = 0, minutos = 0, segundos = 0;
}etapas[3], total, *p_etapas = etapas, 
*p_total = &total;

void pedirDatos();
void tiempoTotal(Tiempo *);
void mostrarTiempo(Tiempo *);

int main(){
    pedirDatos();
    tiempoTotal(p_etapas);
    mostrarTiempo(p_total);
    return 0;
}
void pedirDatos(){
    for(int i = 0; i < 3; i++){
        cout << "\tEtapa " << i+1 << endl;
        cout << "Horas: "; cin >> (p_etapas + i)->horas;
        cout << "Minutos: "; cin >> (p_etapas + i)->minutos;
        cout << "Segundos: "; cin >> (p_etapas + i)->segundos;
    }
}
void tiempoTotal(Tiempo *puntero_etapas){
    for(int i = 0; i < 3; i++){
        p_total->horas += (puntero_etapas+i)->horas;
        p_total->minutos += (puntero_etapas+i)->minutos;
        p_total->segundos += (puntero_etapas+i)->segundos;
    }
    if(p_total->segundos > 60){
        p_total->minutos += (p_total->segundos / 60);
        p_total->segundos %= 60;
    }
    if(p_total->minutos > 60){
        p_total->horas += (p_total->minutos / 60);
        p_total->minutos %= 60;
    }
}
void mostrarTiempo(Tiempo *puntero_total){
    cout << "\n\tTiempo total del ciclista es: " << endl;
    cout << "Horas: " << puntero_total->horas << endl;
    cout << "Minutos: " << puntero_total->minutos << endl;
    cout << "Segundos: " << puntero_total->segundos << endl;
}