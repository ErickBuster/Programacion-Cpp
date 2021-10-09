/*Realice un programa que calcule el valor que toma 
la siguiente funcion para valores dados de x e y */ 
#include <iostream>
#include <math.h>25
using namespace std;
int main(){
    float x , y, r;
    cout << "ingrese los valores de X y de Y: \n";
    cin >> x >> y;
    r = sqrt(x) / (pow(y,2) - 1);
    cout << "Es resultado es " << r << endl;

    system("pause");
    return 0;
}