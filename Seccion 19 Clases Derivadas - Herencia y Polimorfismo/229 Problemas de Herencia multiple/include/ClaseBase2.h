#include <iostream>
using namespace std;

class ClaseBase2{
    //Atributos
    protected:
        int x;
    //Metodos
    public:
        ClaseBase2(int x){  this->x = x;    }
        ~ClaseBase2(){}
        int getX(){ return x;   }
};