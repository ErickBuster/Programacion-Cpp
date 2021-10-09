/*Escriba la siguiente expresion como expresion en c++
a + (b / (c-d))
*/
#include <iostream>
using namespace std;
int main(){
    float a, b ,c, d, r;
    cout << "Ingrese los valores de a ,b, c y d: ";
    cin >> a >> b >> c >> d;
    r = a + (b / (c-d));
    cout << "El resultado de la operacion es: " << r << endl;

    system("pause");
    return 0;
}