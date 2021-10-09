class Cuadrilatero{
    //Atributos
    private:
        float largo, ancho;
        //Metodos
    public:
        Cuadrilatero(float largo, float ancho){
            this->largo = largo;
            this->ancho = ancho;
        }
        Cuadrilatero(float lado){
            this->largo = this->ancho = lado;
        }
        float perimetro();
        float area();
};