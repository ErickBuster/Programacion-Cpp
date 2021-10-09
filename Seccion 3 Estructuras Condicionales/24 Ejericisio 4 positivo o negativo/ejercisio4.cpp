/*Comprobar si un numero digitado por el usuario es 
positivo o negativo */ 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el numero: "; cin >> n;
    if(n > 0){
        cout << "El numero es positivo" << endl;
    }else if( n == 0){
        cout << "El numero es Cero " << endl;
    }else{
        cout << "El numero es negativo " << endl;
    }
    system("pause");
    return 0;
}