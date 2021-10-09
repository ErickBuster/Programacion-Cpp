/* Escriba un programa que defina un vector de 
numeros y calcule la suma de sus elementos */
#include <iostream>
using namespace std;
int main(){
    int n[] = {1,2,3,4,5};
    int suma = 0;
    for(int i = 0; i < 5; i++){
        suma += n[i];
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}
