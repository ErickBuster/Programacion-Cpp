#include <iostream>
using namespace std;
int main(){
    int n, dato = 5;
    cout << "Ingrese un numero: "; cin >> n;
    if(n >= dato){
        cout << "El numero es mayor o igual que " << dato << endl;
    }else{
        cout << "El numero es menor a " << dato << endl;
    }
    system("pause");
    return 0;
}