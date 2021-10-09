class Figura{
    //Atributos
    private:
        int numeroLados;
    public:
        Figura(int numeroLados){
            this->numeroLados = numeroLados;
        }
        int getNumeroLados(){
            return numeroLados;
        }
};