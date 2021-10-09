// Declaracion de una clase
class PlanoCartesiano{
    //Atributos de una clase
    private:
        int x, y; // coordenadas de la clase
    // Metodos de la clase
    public:
        //Constructor que tiene el mismo nombre de la clase
        // y es para inicializar los atributos
        PlanoCartesiano(int _x, int _y){ // Constructor 1
            x = _x; // el valor de _x como parametro que pase se guardara en el atributo
            y = _y; // el valor de _y como parametro que pase se guardara en el atributo
        }
        PlanoCartesiano(){ // Contructor 2
            x = y = 0; // Otra forma de inicializar los atributos sin pasar parametros
        }
        void setX(int valorX); // establecemos el valor de x
        void setY(int valorY); // establecemos el valor de y
        int getX(); // obtener el valor de x
        int getY(); // obtener el valor de y
};