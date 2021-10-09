/*Herencia Multiple:
    Es un tipo de herencia en la que una clase 
    hereda los miembros de mas de una clase base.
    Es decir, existen multiples clases base(padres)
    para la clase derivada (hija). 
Diagrama 

Barco                           Avion
-nombre : string                -modelo : string
Barco(string nombre)            Avion(string modelo)
indicarBarco() : void           indicarAvion() : void
getNombreBarco() : string       getModelo() : string
        ^                              ^
        |---------- HidroAvion---------|
                    -codigo : string
                    HidroAvion(string codigo)
                    getCodigo() : string
                clase hija(HidroAvion) hereda de 2 clases padres
    como declararlo:
class ClaseDerivada : [tipo_acceso] ClaseBase1 , [tipo_acceso] ClaseBase2, ... {
    miembros de la clase... };*/

#include <iostream>
#include "HidroAvion.h"
using namespace std;

int main(){
    HidroAvion *ha1 = new HidroAvion("Veloz12", "HA123", "1238P");
    ha1->mostrarDatos();
    ha1->indicarBarco();
    ha1->indicarAvion();
    cout << endl;
    delete ha1;
    return 0;
}