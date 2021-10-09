// Declaracion de una clase
class PlanoCartesiano{
    //Atributos de una clase
    private: //ENCAPSULAMIENTO PRIVADO
        int x, y; // coordenadas de la clase
    // variable publica
    public:
        int z; // coordenada de la clase de tipo publica
    // Metodos de la clase
    public:
        //Constructor que tiene el mismo nombre de la clase
        // y es para inicializar los atributos
        PlanoCartesiano(int _x, int _y, int _z){ // Constructor 1
            x = _x; // el valor de _x como parametro que pase se guardara en el atributo
            y = _y; // el valor de _y como parametro que pase se guardara en el atributo
            z = _z;
        }
        PlanoCartesiano(){ // Contructor 2
            x = y = z = 0; // Otra forma de inicializar los atributos sin pasar parametros
        }
        void setX(int valorX); // establecemos el valor de x
        void setY(int valorY); // establecemos el valor de y
        int getX(); // obtener el valor de x
        int getY(); // obtener el valor de y

        //funciones para la varible publica
        void setZ(int valorZ);
        int getZ();
};