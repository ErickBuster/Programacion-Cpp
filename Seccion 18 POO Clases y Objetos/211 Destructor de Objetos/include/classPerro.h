using namespace std;
class Perro{
    //Atributos
    private:
        string nombre, raza; 
    //Metodos
    public:
    //Constructor
        Perro(string _nombre, string _raza){
            nombre = _nombre;
            raza = _raza;
        }
        ~Perro(){} // Destructor
        void mostrarDatos();
        void jugar();
};
