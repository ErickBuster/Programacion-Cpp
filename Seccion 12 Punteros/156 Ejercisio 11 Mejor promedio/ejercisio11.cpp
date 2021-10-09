/* hacer una estructura llamda alumno, en la cual
se tendran los siguientes campos: nombre, edad, promedio,
pedir datos al usuario para 3 alumnos, comprobar cual de los 3
tiene el mejor promedio y posteriormente imprimir los
datos del alumno usando punteros */
#include <iostream>
using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumno[3], *p_alumno = alumno;

void pedirDatos();
void promedioMayor(Alumno *);

int main(){
    pedirDatos();
    promedioMayor(p_alumno);

    return 0;
}

void pedirDatos(){
    for(int i = 0; i < 3; i++){
      /*  cin.clear();
        cin.ignore();*/
        fflush(stdin);
        cout << "Nombre alumno " << i+1 << ": ";
        cin.getline((p_alumno + i)->nombre, 30);
        cout << "Edad alumno " << i+1 << ": ";
        cin >> (p_alumno + i)->edad; // p_alumno[i].edad;
        cout << "Promedio alumno " << i+1 << ": ";
        cin >> (p_alumno + i)->promedio; // p_alumno[i].promedio;
    }
}

void promedioMayor(Alumno *puntero_alumno){
    int pos = 0; 
    for(int i = 1; i < 3; i++){
        if((puntero_alumno+i)->promedio > (puntero_alumno+i-1)->promedio){
            pos = i;
        }
    }
    cout << "\n\tAlumno con mayor promedio " << endl;
    cout << "Nombre: " << (puntero_alumno+pos)->nombre << endl;
    cout << "Edad: " << (puntero_alumno+pos)->edad << endl;
    cout << "Promedio: " << (puntero_alumno+pos)->promedio << endl;
}