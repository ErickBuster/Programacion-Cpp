/* Hacer 2 estructuras una llamada promedio 
que tendra los siguientes campos: nota1 - 3 y otro
llamada alumno que tendra los siguientes miembros:
nombre, sexo, edad, hacer que la estructura promedio
este anidada en la estructura alumno, luego pedir 
todos los datos para un alumno, luego calcular
su promedio, y por ultimo imprimir todos sus
datos incluidos el promedio */
#include <iostream>
using namespace std;
struct Promedio{
    float notas[3];
};
struct Alumno{
    char nombre[20];
    char sexo[2];
    int edad;
    struct Promedio prom;
}alumno1;

int main(){
    float promT = 0;
    cout << "Ingrese el nombre ";
    cin.getline(alumno1.nombre,20);
    cout << "Ingrese su sexo: ";
    cin.getline(alumno1.sexo, 2);
    cout << "Ingrese su edad: ";
    cin >> alumno1.edad;

    for(int i = 0; i < 3; i++){
        cout << "Ingrese la nota " << i+1 << ": ";
        cin >> alumno1.prom.notas[i];
        promT += alumno1.prom.notas[i];
    }

    cout << endl << endl;
    cout << "nombre " << alumno1.nombre << endl;
    cout << "sexo: " << alumno1.sexo << endl;
    cout << "edad: " << alumno1.edad << endl;
    cout.precision(3);
    cout << "Promedio: " << promT / 3 << endl;
    return 0;
}