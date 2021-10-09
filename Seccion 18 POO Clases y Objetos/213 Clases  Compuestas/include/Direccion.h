#include <iostream>
using namespace std;
class Direccion{
    //Atributos
    private:
        string direccion;
    //Metodos
    public:
    Direccion(string direccion){ //Constructor
        this->direccion = direccion;
    }
    Direccion(){} // Constructor por defecto
    ~Direccion(){}//Destructor
    string getDireccion(){
        return direccion;
    }
};