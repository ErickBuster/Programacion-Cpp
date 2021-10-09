/* Defina una plantilla para la clase Materia, de tal  manera
que el tipo de dato del atributo califcacion sea del tipo T. Esto 
permitira crear objetos de tipo materia que tengan calificaciones que sean 
numeros enteros, numeros decimales y letras
    1. Cree un objeto de tipo Materia usando el tipo int. Imprima los
    valores de los atributos del objeto creado
    2. Cree un objeto de tipo Materia usando el tipo float
    3. Cree un objeto de tipo Materia usando el tipo char
    4. Incluya un metodo en la clase que permita modificar la 
    calificacion de una materia 
Diagrama de clase
Materia<T>
-nombreMateria : string
-clave : int
-calificacion : T
Materia(string, int, T)
+mostrarDatos() : void
+setCalificacion(T) : void
+getCalificacion() : T
*/
#include <iostream>
#include "materia.h"
using namespace std;
int main(){
    Materia<int> obj1("Algoritmos", 1, 8);
    Materia <float> obj2("Fisica", 3, 8.67);
    Materia<char> obj3("Comunicaciones", 4, 'B');

    obj1.mostrarDatos();
    obj2.mostrarDatos();
    obj3.mostrarDatos();

    obj2.setCalificacion(9.48);
    cout << setw(10) << "Calificacion: " << setw(2) << obj2.getCalificacion() << endl;
    return  0;
}