/*Escribe la siguiente expresion como expresion en c++
(a + (b/c)) / (d + (e/f)) */
#include <iostream>
using namespace std;
int main(){
    float a, b, c, d, e, f, r;

    cout << "Ingrese los valores de la expresion (a, b, c, d, e,f): ";
    cin >> a >> b >> c >> d >> e >> f;
    r = (a + (b/c)) / (d + (e/f));
    cout.precision(1);
    cout << "El resultado es: " << r << endl;
    system("pause");
    return 0;
}