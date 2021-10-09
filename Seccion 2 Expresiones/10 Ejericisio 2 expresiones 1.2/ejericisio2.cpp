/*Escribe la siguiente expresion matematica como expresion en c++
(a+b)/(c+d) */
#include <iostream>
using namespace std;
int main(){
    float a, b, c, d, r;

    cout << "Ingrese los valores de la expresion (a, b, c, d): ";
    cin >> a >> b >> c >> d;
    r = (a+b)/(c+d);
    cout << "El resultado es: " << r << endl;
    system("pause");
    return 0;
}