/* plantillas de funcion
Sacar el valor absoluto de un numero 
tipo de dato general*/
#include <iostream>
using namespace std;

// prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD);

int main(){
    int n1 = -4;
    float n2 = -56.67;
    double n3 = -151.15683;
    mostrarAbs(n1);
    mostrarAbs(n2);
    mostrarAbs(n3);
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero < 0){
        numero = abs(numero);
    }
    cout << "El valor absoluto es: " << numero << endl;
}