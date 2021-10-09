//Autorreferencia del Objeto: this
using namespace std;
class Perro{
    //Atributos
    private:
        string nombre, raza; 
    //Metodos
    public:
    //Constructor
        Perro(string nombre, string raza){ // diferencea los miembros de la clase this
            //lo cual en los parametros de la funcion pasamos directo los atributos
            // de la clase usando this
            this->nombre = nombre;
            this->raza = raza;
        }
        ~Perro(){} // Destructor
        void mostrarDatos();
        void jugar();
};
