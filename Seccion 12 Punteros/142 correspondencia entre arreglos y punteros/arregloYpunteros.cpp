// correspondencia entre arrays y punteros
#include <iostream>
using namespace std;
int main(){
    int numeros[] = {1,2,3,4,5};
    int *p_numeros;

    p_numeros = numeros;  // *p_numeros = &numeros[0]; es igual
    for(int i = 0; i < 5; i++){
        cout << "Elementos del vector [" << i << "]: "
         << *p_numeros++ << endl;
         cout << "Direccion del vector [" << i << "]: "
         << p_numeros << endl;
    }
    return 0;
}