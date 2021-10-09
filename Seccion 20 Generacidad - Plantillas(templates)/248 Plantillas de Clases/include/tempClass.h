template <class T, class T2>
class tempClass{
        T dato1;
        T2 dato2;
    public:
        tempClass(T dato1, T2 dato2){
            this->dato1 = dato1;
            this->dato2 = dato2;
        }
        void setDato1(T dato1){
            this->dato1 = dato1;
        }
        T getDato1(){   return dato1; }
        void setDato2(T dato2){
            this->dato2 = dato2;
        }
        T2 getDato2(){   return dato2; }
        void mostrarDator(){
            cout << "Dato 1: " << dato1 << endl;
            cout << "Dato 2: " << dato2 << endl;
        }

};