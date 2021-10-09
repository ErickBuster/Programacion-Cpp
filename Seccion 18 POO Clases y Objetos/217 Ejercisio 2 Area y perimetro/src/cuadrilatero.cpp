#include "classCuadrilatero.h"

float Cuadrilatero::perimetro(){
    return 2 * largo + 2 * ancho;
}
float Cuadrilatero::area(){
    return largo * ancho;
}