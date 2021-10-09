/*Diagrama de clases (UML)
- x : int
- y : int
Tablero(int x, int y)
moverArriba(int n) : void
moverAbajo(int n) : void
moverDerecha(int n) : void
moverIzquierda(int n ) : void
getx() : int
getY() : int */
class Tablero{
    //Atributos
    private:
    int coordenadaX, coordenadaY;

    //Metodos
    public:
        Tablero(int coordenadaX, int coordenadaY){
            this->coordenadaX = coordenadaX;
            this->coordenadaY = coordenadaY;
        }
        void moverArriba(int);
        void moverAbajo(int);
        void moverIzquierda(int);
        void moverDerecha(int);
        int getX();
        int getY();
};