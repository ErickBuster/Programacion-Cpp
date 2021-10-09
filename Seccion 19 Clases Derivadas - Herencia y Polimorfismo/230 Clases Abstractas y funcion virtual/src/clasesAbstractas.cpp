#include "Carnivoro.h"
#include "Herbivoro.h"
#include "Planta.h"

int main(){
    Planta *planta1 = new Planta();
    planta1->alimentarse();

    Carnivoro *carnivoro1 = new Carnivoro();
    carnivoro1->alimentarse();

    Herbivoro * herbivoro1 = new Herbivoro();
    herbivoro1->alimentarse();

    delete planta1;
    delete carnivoro1;
    delete herbivoro1;
    return 0;
}