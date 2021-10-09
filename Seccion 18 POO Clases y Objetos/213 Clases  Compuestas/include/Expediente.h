class Expediente{
    //Atributos
    private: 
        int numero_Expediente;
    //Metodos
    public:
        Expediente(int numero_Expediente){ // Constructor
            this->numero_Expediente = numero_Expediente;
        }
        Expediente(){} //Constructor por defecto
        ~Expediente(){} // Destructor
        int getNumeroExpediente(){
            return numero_Expediente;
        }
};