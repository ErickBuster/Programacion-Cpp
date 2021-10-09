/* En una lcase de 5 alumnos se han realizado tres examenes
y se requiere determinar el numero de :
    a. alumnos que abrobaron todos los examens
    b. alumnos que aprobaron al menos un examen
    c. alumnos que aprobaron unicamente el ultimo examen

realice un programa que permita la lectura de los datos y el 
calculo de las estadisticas */
#include <iostream>
using namespace std;
int main(){
    float examen[3];
    int aT = 0, a1E = 0, aUE = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cout << "Igrese calificacion del examen " << j + 1 << endl;
            cin >> examen[j];
        }
        if(examen[0] > 5 && examen[1] > 5 && examen[2] > 5){
            aT++;
        }if(examen[0] > 5 || examen[1] > 5 || examen[2] > 5){
            a1E++;
        }if(examen[2] > 5){ aUE++; }
    }
    cout << "a. alumnos que abrobaron todos los examens: " << aT << endl;
    cout << "b. alumnos que aprobaron al menos un examen: " << a1E << endl;
    cout << "c. alumnos que aprobaron unicamente el ultimo examen: " << aUE << endl;
    return 0;
}