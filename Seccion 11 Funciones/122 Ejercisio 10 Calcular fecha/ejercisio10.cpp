/*Escriba un funcion nombrada calc_años() que tenga un
parametro entero que represente el numero
total de dias desde la fecha 1/1/2000 */
#include <iostream>
using namespace std;

void calc_anios(int &,int &,int &,int &);

int main(){
    int diasTotal, anio, mes, dia;
    cout << "Ingrese el numero de dias: ";
    cin >> diasTotal;
    calc_anios(diasTotal, anio, mes, dia);

    cout << "\tFecha actual" << endl;
    cout << dia << "/" << mes << "/" << anio << endl;

    

    return 0;
}

void calc_anios(int &tdias,int &anio,int &mes,int &dia){
    int dia_ini = 1, mes_ini = 1, anio_ini = 2000;
    anio = anio_ini + (tdias / 365);
    tdias %= 365;
    mes = mes_ini + (tdias / 30);
    tdias %= 30;
    if(mes > 12){
        anio = mes / 12;
        mes %= 12;
    }
    dia = dia_ini + tdias;
}