/*Escriba un programa que defina un vector de numeros y calcule 
la multiplicacion acumulada de sus elementos*/
#include <iostream>
using namespace std;
int main(){
    int n[] = {1,2,3,4,5};
    int mul = 1;
    for(int i = 0; i < 5; i++){
        mul *= n[i];
    }
    cout << "La multiplicacion es: " << mul << endl;
    return 0;
}