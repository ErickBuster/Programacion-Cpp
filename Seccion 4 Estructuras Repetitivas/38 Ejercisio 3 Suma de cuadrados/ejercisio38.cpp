/* Realice un programa que calcule y muestre
en la salida estandar la suma de los cuadrados de
los 10 primeros enteros mayores a 0 */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int r = 0;
    for(int i = 1; i <= 10; i++){
        r += pow(i,2);
    }
    cout << "el resultado es: " << r << endl;
    return 0;
}