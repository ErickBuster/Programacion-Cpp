/*Diagrama de clases (UML)
-numeroAtleta : int
-nombre : string
-tiempoCarrera : float
Atleta(int numeroAtleta, string nombre, float tiempoCarrera)
getTiempoCarrera() : float
mostrarDatosGanador() : void */
#include <iostream>
using namespace std;
class Atleta{
    //Atributos
    friend void pedirDatos(Atleta *);
    private:
    int numero_Atleta;
    string nombre;
    float tiempo_Carrera;
    //Metodos
    public:
    Atleta(string nombre, int numero_Atleta, float tiempo_Carrera){
        this->nombre = nombre;
        this->numero_Atleta = numero_Atleta;
        this->tiempo_Carrera = tiempo_Carrera;
    }
    Atleta(){}
    ~Atleta(){}
    float getTiempoCarrera();
    void mostrarDatos();
    static int indiceGanador(Atleta *atletlas, int n);
};

