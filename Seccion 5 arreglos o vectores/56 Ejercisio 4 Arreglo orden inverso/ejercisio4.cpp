/* Escribe un programa que defina un vector de numeros y muestre en la salida estanda
el vector en oriden inverso */
#include <iostream>
using namespace std;
int main(){
    int n[5] = {1,2,3,4,5};
    for(int i = 4; i >=0; i--){
        cout << n[i] << endl;
    }
    return 0;
}