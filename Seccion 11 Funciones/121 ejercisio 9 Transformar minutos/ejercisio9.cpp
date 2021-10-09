/* escriba una funcion nombrada tiempo
que tenga un parametro en numero entero llamado
totalseg y tres parametros de referencia enteros nombrados
horas, min y seg. la funion es convertir el numero de
segundos transmitido en un numero equivalente
de horas, minutos y segundos */
#include <iostream>
using namespace std;

void tiempo(int&,int&,int&,int&);

int main(){
    int totalSeg, horas, minutos, segundos;
    cout << "Ingrese el numero de segundos: "; cin >> totalSeg;
    tiempo(totalSeg, horas, minutos, segundos);

    cout << "HoraS: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "segundos: " << segundos << endl;
    return 0;
}

void tiempo(int& Seg_total,int& hr,int& min,int& seg){
    min = Seg_total / 60;
    Seg_total -= (min * 60);
    seg = Seg_total;
    if(min > 60){
        hr = min / 60;
        min -= (hr * 60);
    }
    Seg_total -= seg;
}