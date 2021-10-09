//arreglo de objetos: no va a tener ningun tipo de parametros
class Alumno{
    //Atributos
    private:
    float calif_Mate,
        calif_Progamacion,
        primedio;
    public:
        //lo cual se puede o no poner un constructor por defecto
        Alumno(float _calif_Mate, float _calif_Programacion){
            calif_Mate = _calif_Mate;
            calif_Progamacion = _calif_Programacion;
        }
        Alumno(){}
        void pedirDatos();
        void mostrarNotas();

};