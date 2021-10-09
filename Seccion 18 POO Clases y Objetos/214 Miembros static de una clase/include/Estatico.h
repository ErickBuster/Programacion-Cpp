#include <iostream>
using namespace std;

class Estatico{
    //Atributos
    private:
        /*cuando es estatico, solo le pertenece a la clase y recoge solo para su valor
        con la misma clase, ya no recogen una copia como anteriormente.
        Si no que todos los objetos tendran el mismo valor que el atributo estatico
        No se puede inicializar entro de la clase los atributos estaticos*/
        static int contador; // Declaracion de un atributo estatico
        int contador2; //Atributo no estatico
    //Metodos
    public:
        Estatico(){
            contador++;
        }
        Estatico(int contador2){
            this->contador2 = contador2;
        }
        void conta(){
            contador2++;
        }
        int getContador(){
            return contador;
        }
        int getContador2(){
            return contador2;
        }
        // Metodo statico
        static int suma(int n1, int n2){
            return n1 + n2;
        }

};