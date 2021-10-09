#include "DiaAnio.h"
#include <iostream>
using namespace std;
bool DiaAnio::igual(DiaAnio &d){//Pasado referenciado
    cout << "Direccion a la que apunta el puntero " << &d << endl;
    return (dia == d.dia && mes == d.mes) ? true : false;
}
void DiaAnio::visualizar(){
    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
}
