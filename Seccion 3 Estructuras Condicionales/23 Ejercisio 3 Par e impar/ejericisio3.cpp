/*Realice un programa que lea un valor 
entero y determine si se trata de un numeor par 
o impar */
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el numero: ";
    cin >> n;

    if(n % 2 == 0){
        cout << "Es un numero par \n";
    }else{
        cout << "Es un numero impar \n";
    }
    system("pause");
    return 0;
}