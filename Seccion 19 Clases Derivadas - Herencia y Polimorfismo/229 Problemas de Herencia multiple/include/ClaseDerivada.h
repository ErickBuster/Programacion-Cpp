#include <iostream>
#include "ClaseBase1.h"
#include "ClaseBase2.h"
using namespace std;

class Derivada : public ClaseBase1, ClaseBase2{
    //Atributos
    protected:
        int x;
    //Metodos
    public:
        Derivada(int x1, int x2, int x) : ClaseBase1(x1), ClaseBase2(x2){
            this->x = x;
        }
        ~Derivada(){}
        int getX(){ 
            return x;
            //Para retornar valores de X 
            /*return getX(); Aqui mostraria una gran ambiguedad y error ya que 
            esta esa funcion esta en todas las clases bases y en la clase derivada
            para solucionar el problema se especifica de las siguientes formas usando 
            los :: */
            //return ClaseBase1::getX();
            //return ClaseBase1::x;   
            //return ClaseBase2::getX();
            //return ClaseBase2::x;   
        }
};