/* Suma de 2 numeros complejos
z1 = 5 - 3i ; z2 = -4 + 2i
suma = 1 - i */ 
#include <iostream>
using namespace std;

struct Complejo{
    float real, imaginario;
}z1,z2;

void pedirDatos();
void sumaComplejo(Complejo &, Complejo &);
void mostrarSuma(Complejo);

int main(){
    pedirDatos();
    sumaComplejo(z1, z2);
    mostrarSuma(z1);
    return 0;
}

void pedirDatos(){
    cout << "Ingrese la parte real: ";
    cin >> z1.real;
    cout << "Ingrese la parte imaginaria: ";
    cin >> z1.imaginario;
    cout << "Ingrese la parte real: ";
    cin >> z2.real;
    cout << "Ingrese la parte imaginaria: ";
    cin >> z2.imaginario;
}
void sumaComplejo(Complejo &za, Complejo &zb){
    za.real += zb.real;
    za.imaginario += zb.imaginario;
}
void mostrarSuma(Complejo zr){
    cout <<"\t la suma es: " << zr.real << " , " << zr.imaginario << "i" << endl;
}