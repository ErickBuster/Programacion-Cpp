#include "Poligono.h"

class Rectangulo : public Poligono{
    //Atributos
    private:
        float base;
        float altura;
    //Metodos
    public:
        Rectangulo(float base, float altura){
            this->base = base;
            this->altura = altura;
        }
        ~Rectangulo(){}
        float perimetro(){
            return (2 * base + 2 * altura);
        }
        float area(){
            return base * altura;
        }
};