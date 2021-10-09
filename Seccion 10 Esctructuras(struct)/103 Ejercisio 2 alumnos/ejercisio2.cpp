/* Hacer una estructura llamada alumno, en la cual se
tendran los siguientes campos: nombre, edad, promedio,
pedir datos al usuario para 3 alumnos, comprobar
cual de los 3 tiene mejor promedio y posteriormente
imprimir los datos del alumno */
#include <iostream>
using namespace std;

struct alumno
{
    char nombre[20];
    int edad;
    float promedio;
}a[3];

int main(){
    float pMax = 0;
    int p;
    for(int  i = 0; i < 3; i++){
        fflush(stdin);
        cout << "alumno " << i+1 << ": ";
        cin.getline(a[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "edad: "; cin >> a[i].edad;
        cout << "promedio: "; cin >> a[i].promedio;
        if(a[i].promedio > pMax){
            pMax = a[i].promedio;
            p = i;
        }
    }
    
    cout << "\nEl alumno con mayor promedio es: " << endl;
    cout << "alumno: " << a[p].nombre << endl;
    cout << "edad: " << a[p].edad << endl;
    cout << "promedio: " << a[p].promedio << endl << endl;
    
    return 0;
}