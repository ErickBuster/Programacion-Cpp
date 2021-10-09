/*Escriba un programa que lea tres numeros y determine cual de ellos
es el mayor */ 
#include <iostream>
using namespace std;
int main(){
    int n, m, o;
    cout << "Ingrese los 3 numeros: \n";
    cin >> n >> m >> o;
    cout << "El numero mayor es: ";
    if((n >= m) && (n >= o)){
        cout << n << endl;
    }else if(m >= o){
        cout << m << endl;  
    }else{
        cout << o << endl;
    }
    system("pause");
    return 0;
}