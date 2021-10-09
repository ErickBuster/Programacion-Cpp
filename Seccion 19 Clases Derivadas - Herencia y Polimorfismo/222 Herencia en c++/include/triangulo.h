#include "figuras.h"
#include <math.h>
class Triangulo : public Figura{ // Heredando la clase figura
    //atributos
    private:
        float lado1, lado2, lado3;

    //Metodos
    public:
        Triangulo(int nLados, float lado1, float lado2, float lado3) : Figura(nLados){
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
        }
        float areaTriangulo(){
            //usando la ecuacion de Heron!!
            float p = (lado1 + lado2 + lado3)/2;
            float area = sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));
            return area;
        }

};