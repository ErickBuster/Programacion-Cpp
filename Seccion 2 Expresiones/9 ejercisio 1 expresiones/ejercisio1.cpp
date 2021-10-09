/* Expresion matematica (a/b) + 1*/
#include <iostream>
using namespace std;
int main(){
    float a, b, r;

    cout << "Ingrese el valor de a y b: ";
    cin >> a >> b;
    r = (a/b) + 1;
    cout << "El resultado es " << r << endl;
    system("pause");
    return 0;

}