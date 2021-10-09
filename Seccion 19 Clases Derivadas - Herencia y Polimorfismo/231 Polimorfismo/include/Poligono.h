#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono{
    //Metodos
    public:
        ~Poligono(){}
        virtual float perimetro() = 0;
        virtual float area() = 0;
};
#endif