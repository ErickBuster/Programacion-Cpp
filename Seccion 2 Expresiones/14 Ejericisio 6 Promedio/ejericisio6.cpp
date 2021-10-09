/*Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos */
#include <iostream>
using namespace std;

int main(){
    float cal1, cal2, cal3, cal4, prom;
    cout << "ingrese las notas de los alumnos: ";
    cin >> cal1 >> cal2 >> cal3 >> cal4;
    prom = (cal1 + cal3 + cal4 + cal2) / 4;

    cout << "El promedio es: " << prom << endl;
    system("pause");
    return 0;
}