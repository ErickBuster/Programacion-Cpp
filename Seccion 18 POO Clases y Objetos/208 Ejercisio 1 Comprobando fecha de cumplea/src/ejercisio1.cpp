/* Definir una clase DiaAnio con los atributos 
    mes y dia, los metodos igual() y visualizar. El mes se registrara
    como un valor entero (1, enero, 2 febrero, etc)
    El dia del mes se registrara en otra variable entera dia. 
    Escribir un programa que compruebe si una fecha es su cumpleaños -*/
#include <iostream>
#include "DiaAnio.h"
using namespace std;

int main(){
    DiaAnio *hoy;
    DiaAnio *cumple;
    int d, m;
    cout << "Ingrese la fecha de hoy: (dia/ mes) ";
    cin >> d >> m;
    hoy = new DiaAnio(d, m);
    cout << "\n introduzca la fecha de su cumpleanios(dia / mes): ";
    cin >> d >> m;
    cumple = new DiaAnio(d, m);
    // mostrando fecha de hoy
    hoy->visualizar();
    // mostrando la fecha de cumple
    cumple->visualizar();
    
    cout << "Direccion a la que apunta el puntero " << cumple << endl;
    cout << "Direccion del apuntador " << &cumple << endl;

    if(hoy->igual(*cumple)){ // le mando la direccion a la que apunta cumple
        cout << "\tHoy es su cumpleanios " << endl << endl;
    }else{
        cout << "Que tenga un buen dia" << endl << endl;
    }

    delete hoy;
    delete cumple;
    return 0;
}