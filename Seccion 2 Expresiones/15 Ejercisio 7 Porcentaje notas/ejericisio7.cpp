/*La calificacion final de un estudiante es el promedio de 3 notas:
   - la nota de practicas que cuenta un 30% del total
    -La nota teorica que cuenta un 60%
    -La nota de participacion que cuenta el 10% restante
Escieba un programa que lea las tres notas del alumno  y escriba 
su nota final*/
#include <iostream>
using namespace std;
int main(){
    float practicas, teorica, participacion, promedio;

    cout << "Ingresa la calificacion de las practicas: ";
    cin >> practicas;
    cout << "Ingresa la calificacion teorica: ";
    cin >> teorica;
    cout << "Ingresa la calificacion de las participaciones: ";
    cin >> participacion;

    practicas *= 0.3;
    teorica *= 0.6;
    participacion *= 0.1;
    promedio = practicas + teorica + participacion;

    cout << "El promedio es: " << promedio <<endl;
    system("pause");
    return 0;
}