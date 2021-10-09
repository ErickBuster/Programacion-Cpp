/* Clases Compuestas: sus atributos tienen objetos
de otras clases */
#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(){
    Estudiante *estudiante1 = new Estudiante("34FG", 8.7, 56, "Calle 54 Ciudad de Mexico");
    estudiante1->mostrarDatos();

    delete estudiante1;
    return 0;
}