/* Diagrama de clases
-marca : string
-modelo : string
-precio : float
vehiculo(string marca, string modelo, float precio)
vehiculo()
getPrecio() : float 
mostrarDatos() : void */
#include <iostream>
using namespace std;
class Vehiculo{
    //Atributos
    private:
        string marca, modelo;
        float precio;
    public:
        Vehiculo(string marca, string modelo, float precio){
            this->marca = marca;
            this->modelo = modelo;
            this->precio = precio;
        }
        Vehiculo(){}
        ~Vehiculo(){}
        void mostrarDatos();
        float getPrecio();
    //funcion estatica para saber el auto mas barato
        static int indiceMasBarato(Vehiculo choches[], int n);
};