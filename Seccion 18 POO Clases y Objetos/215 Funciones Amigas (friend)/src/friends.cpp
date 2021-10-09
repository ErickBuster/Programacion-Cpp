//Funciones amigas (friends)
#include <iostream>
#include "classPersonaje.h"
using namespace std;


int main(){
    Personaje *personajePrincipal = new Personaje(100, 90);
    //mostrando los datos
    personajePrincipal->mostrarDatos();

    //modificando datos
    modificar(*personajePrincipal, 50, 40);

    //mostrando los dato
    personajePrincipal->mostrarDatos();
    return 0;
}
//Funcion para modificar los valores de ataque y defensa de un Objeto Personaje
// pasando por referencia para modificar el objeto
void modificar(Personaje &personaje, int ataq, int defen){
    personaje.ataque = ataq;
    personaje.defensa = defen;
}