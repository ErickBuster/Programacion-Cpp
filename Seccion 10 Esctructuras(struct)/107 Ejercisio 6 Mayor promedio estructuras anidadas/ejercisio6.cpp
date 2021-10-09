/*Utilizar 2 estrucutras del problema 5 pero
 ahora pedir los datos para n alumnos y calcular 
 cual de todos tiene el mejor promedio e imprimir
 sus datos*/
 #include <iostream>
using namespace std;
struct Promedio{
    float notas[3], promed = 0;
};
struct Alumno{
    char nombre[20];
    char sexo[2];
    int edad;
    struct Promedio prom;
}alumno1[20];

int main(){
    float promT = 0;
    int nAlumnos, mayor;
    cout << "Numero de alumnos: "; cin >> nAlumnos;
    for(int i = 0; i < nAlumnos; i++){
        fflush(stdin);
        cout << "Ingrese el nombre ";
        cin.getline(alumno1[i].nombre,20);
        cout << "Ingrese su sexo: ";
        cin.getline(alumno1[i].sexo, 2);
        cout << "Ingrese su edad: ";
        cin >> alumno1[i].edad;
        for(int j = 0; j < 3; j++){
            fflush(stdin);
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> alumno1[i].prom.notas[j];
            alumno1[i].prom.promed += alumno1[i].prom.notas[j];
        }
        if((alumno1[i].prom.promed / 3) > promT){
            promT = alumno1[i].prom.promed / 3;
            mayor = i;
        }
    }

    cout << endl << endl;
    cout << "El alumno con mayor promedio es: " << endl;
    cout << "nombre " << alumno1[mayor].nombre << endl;
    cout << "sexo: " << alumno1[mayor].sexo << endl;
    cout << "edad: " << alumno1[mayor].edad << endl;
    cout.precision(3);
    cout << "Promedio General: " << promT << endl;
    for(int i = 0; i < 3; i++){
        cout << "nota " << i+1 <<": " << alumno1[mayor].prom.notas[i] << endl;
    }
    return 0;
}