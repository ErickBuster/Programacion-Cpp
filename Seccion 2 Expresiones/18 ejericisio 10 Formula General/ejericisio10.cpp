/*Escriba un programa que calcule las soluciones
 de una ecuacion de segundo con la formula general */
 #include <iostream>
 #include <math.h>
 using namespace std;
 int main(){
     float a, b, c ,r1, r2, sqr, i;
     cout << "Ingrese los valores \na: ";
     cin >> a;
     cout << "b: "; cin >> b;
     cout << "c: "; cin >> c;
    sqr = pow(b,2) - 4 * a *c;
    if(sqr >= 0){
        r1 = (-b + sqrt(sqr))/ (2 * a);
        r2 = (-b - sqrt(sqr))/ (2 * a);
        cout.precision(4);
        cout << "El valor x1 = " << r1 << endl;
        cout << "El valor x2 = " << r2 << endl;
    }else{
        r1 = r2 = -b / (2 * a);
        i = (sqrt(abs(sqr)))/(2 * a);
        cout.precision(4);
        cout << "El valor x1 = " << r1 << " + " << i <<"i" << endl;
        cout << "El valor x1 = " << r2 << " " << -i <<"i" << endl;
    }
    system("pause");
    return 0;
 }