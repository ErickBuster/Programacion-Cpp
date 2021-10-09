/* Hacer un programa que realice la serie Fobonacci */
#include <iostream>
using namespace std;
int main(){
    int n, x = 0, y = 1, z = 1;
    cout << "Ingrese el numero: "; cin >> n;
    cout << "1, ";
    for(int i = 1; i <= n; i++){
        z = x + y;
        cout << z << ", ";
        x = y;
        y = z;
    }
    return 0;
}