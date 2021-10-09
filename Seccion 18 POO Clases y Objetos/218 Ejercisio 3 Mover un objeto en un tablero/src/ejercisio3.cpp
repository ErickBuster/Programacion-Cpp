/* Construir un programa que permita dirigir el movimiento
de un objeto de un tablero y actualice su posicion dentro
del mismo. los movimientos posibles son ARRIBA, ABAJO,
DERECHA e IZQUIERDA. Tras cada movimiento el programa 
mostrara la nueva direccion elegida y las coordenadas 
de situacion del objeto dentro del tablero */
#include <iostream>
#include <strings.h>
#include <string.h>
#include "Tablero.h"
using namespace std;

int main(){
    Tablero *objeto1;
    int x, y;
    
    cout << "Digite la posicion inicial del objeto " << endl;
    cout << "X: "; cin >> x;
    cout << "Y: "; cin >> y;

    objeto1 = new Tablero(x, y);
    char opcion;
    while(1){
        fflush(stdin);
        int movimientos = 0;
        cout << "Arriba 'W' " << endl;
        cout << "Abajo 'S' " << endl;
        cout << "Izquierda 'A' " << endl;
        cout << "Derecha 'D' " << endl;
        cout << "Salir 'E'" << endl;
        cout << ">>: "; cin >> opcion;
        if(opcion == 'W' || opcion == 'A'
                        || opcion == 'S'
                        || opcion == 'D'){
            cout << "cuantas posiciones te quieres mover?: ";
            cin >> movimientos;
        }
        switch (opcion){
        case 'W':   objeto1->moverArriba(movimientos);  break;
        case 'S':   objeto1->moverAbajo(movimientos);   break;
        case 'A':   objeto1->moverIzquierda(movimientos);   break;
        case 'D':   objeto1->moverDerecha(movimientos);    break;
        case 'E':   delete objeto1; exit(0);
        }
        cout <<"\tPosicion actual" << endl;
        cout << "posicion X: " << objeto1->getX() << endl;
        cout << "posicion Y: " << objeto1->getY() << endl << endl;
        system("pause");
        system("cls");
    }
    return 0;
}