#include "Poligono.h"
#include <math.h>
class Triangulo : public Poligono{
    //Atributos
    private:
        float lado1, lado2, lado3;
    //Metodos
    public:
        Triangulo(float lado1, float lado2, float lado3){
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
        }
        ~Triangulo(){}
        float perimetro(){
            return (lado1 + lado2 + lado3);
        }
        float area(){
            float s = (lado1 + lado2 + lado3) / 2;
            s = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
            return s;
        }
};