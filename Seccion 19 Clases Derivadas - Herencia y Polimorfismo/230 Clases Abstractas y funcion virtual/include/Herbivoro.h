#include "Animal.h"
class Herbivoro : public Animal{
    //Metodos
    public:
        void alimentarse(){
            cout << "El herbivoro se alimenta con plantas" << endl;
        }
};