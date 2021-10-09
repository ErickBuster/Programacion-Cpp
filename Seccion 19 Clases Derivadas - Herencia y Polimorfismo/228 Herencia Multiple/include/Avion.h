#include <iostream>
using namespace std;
class Avion{
    //Atributos
    private:
        string modelo;
    //Metodos
    public:
        Avion(string modelo){   this->modelo = modelo;  }
        ~Avion(){}
        void indicarAvion(){
            cout << "Desplazamiento por aire " << endl;
        }
        string getModelo(){ return modelo;  }
};