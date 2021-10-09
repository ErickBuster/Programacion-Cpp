#include <iostream>
#include "persona.h"
using namespace std;

int main(){
    //objeto dinamico
    Persona *persona1 = new Persona("Juan manuel", 25);
    
    persona1->correr();
    persona1->correr(45);
    cout << endl << endl;
    Persona *persona2 = new Persona("161213A");
    persona2->correr();
    persona2->correr(50);
    return 0;
}