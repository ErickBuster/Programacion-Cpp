#include <iostream>
#include <Tablero.h>
using namespace std;
void Tablero::moverArriba(int Y){ coordenadaY += Y; }
void Tablero::moverAbajo(int Y){ coordenadaY -= Y; }
void Tablero::moverDerecha(int X){ coordenadaX += X; }
void Tablero::moverIzquierda(int X){ coordenadaX -= X; }

int Tablero::getX(){ return coordenadaX; }
int Tablero::getY(){ return coordenadaY; }