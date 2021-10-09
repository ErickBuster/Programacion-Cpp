/*Recursividad
Fctorial de un numero 3! = 1*2*3
    factorial(n) = 1
        n * factorial(n-1)  , si n = 0
                                si n > 0
                                */
#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int n, r;
    cout << "Ingrese el numero factorial: ";
    cin >> n;
    r = factorial(n);
    cout << n << "!: " << r << endl;
    return 0;

}

int factorial(int n){
    if(!n){ // caso base
        n = 1;
    }else{ // caso general
        n *= factorial(n - 1);
    }
    return n;
}