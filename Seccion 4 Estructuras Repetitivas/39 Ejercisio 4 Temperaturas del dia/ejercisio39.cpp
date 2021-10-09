/* Escriba un programa que tome cada 4 horas
la temperatura exterior, leyendola durante un periodo
de 24 horas. es decir, debe leer 6 temperaturas
calcule la temperatura media del dia, la 
temperatira mas alta y la mas baja */
#include <iostream>
using namespace std;
int main(){
    float n, M = 0, m = 0, prom = 0;
    for(int i = 0; i < 6; i++){
        cout << "Ingrese la temperatura " << i+1 << ": ";
        cin >> n;
        prom += n;
        if(n > M){ M  = n;}
        if(n < m){ m = n; }
    }
    cout << "Temperatura mas alta: " << M << endl;
    cout << "Temperatura mas baja: " << m << endl;
    cout << "Temperatura promedio: " << prom/6 << endl;
    return 0;
}