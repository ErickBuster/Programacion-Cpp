/*Punteros
&n  = la direccion de n
*n = La variable cuya direccion esta almacenada en n
*/
#include <iostream>
using namespace std;

int main(){
    int num, *dir_num;
    num  = 20;
    dir_num = &num;
    cout << "Numero: " << num << endl;
    cout << "Direccion de num: " << &num << endl;
    cout << "Direccion de num con puntero: " << dir_num << endl;
    cout << "Numero con puntero: " << *dir_num << endl;
    cout << "Direccion del puntero: " << &dir_num << endl;

    return 0;
}