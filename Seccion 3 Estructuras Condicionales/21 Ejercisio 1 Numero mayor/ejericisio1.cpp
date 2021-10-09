/*Escriba un programa que lea dos numeros y determine
cual de ellos es el mayor*/
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Ingrese los 2 numeros: ";
    cin >> n >> m;
    cout << "El numero mayor es: ";
    if(n > m){
        cout << n << endl;
    }else{
        cout << m << endl;
    }

    system("pause");
    return 0;
}