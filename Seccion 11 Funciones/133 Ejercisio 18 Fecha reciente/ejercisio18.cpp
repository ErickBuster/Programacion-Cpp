/*Escriba una funcion en c++ llamada mayor()
que devuelva la fecha mas reciente de cualquier par de 
fechas que se le transmitan. por ejemplo
si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor
sera devuelva la segunda fecha */

#include <iostream>
using namespace std;

struct Fecha{
    int dia, mes, anio;
}f1,f2;

void pedirDatos();
Fecha mayor(Fecha, Fecha);
void mostrarFechaMayor(Fecha);

int main(){
    pedirDatos();
    Fecha fechaM = mayor(f1,f2);
    mostrarFechaMayor(fechaM);

    return 0;
}

void pedirDatos(){
    cout << "Ingrese la primera fecha " << endl;
    cout << "dia: "; cin >> f1.dia;
    cout << "mes: "; cin >> f1.mes;
    cout << "anio: "; cin >> f1.anio;
    cout << "Ingrese la segunda fecha " << endl;
    cout << "dia: "; cin >> f2.dia;
    cout << "mesL "; cin >> f2.mes;
    cout << "anio: "; cin >> f2.anio;
}

Fecha mayor(Fecha F1, Fecha F2){
    if((F1.anio >= F2.anio) &&
    (F1.mes >= F2.mes) &&
    (F1.dia >= F2.dia)){
        return F1;
    }else{
        return F2;
    }
}

void mostrarFechaMayor(Fecha M){
    cout << "La fecha mayor es: ";
    cout << M.dia << "/" << M.mes << "/" << M.anio << endl;
}