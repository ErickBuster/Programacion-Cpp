/* Transmision de arreglos
Ejemplo: Hllar el maximo elemento de un arreglo */
#include <iostream>
using namespace std;

int hallarMax(int *, int);
int main(){
    const int elementos = 5;
    int numeros[elementos] = {1,2,8,4,5};
    cout << "Numero mayor: " << hallarMax(numeros, elementos) << endl;

    return 0;
}

int hallarMax(int *dir_Vector, int nelementos){
    int max = 0;
    for(int  i = 0; i < nelementos; i++){
        if(*(dir_Vector+i) > max){ // dir_Vector[i];
            max = *(dir_Vector+i); // = dir_Vector[i];
        }
    }
    return max;
}