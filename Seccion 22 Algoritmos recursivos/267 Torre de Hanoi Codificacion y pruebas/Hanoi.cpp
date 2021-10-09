#include <iostream>
#include <math.h>
using namespace std;

void hanoi(char varInicial, char varCentral, char varFinal, int n){
    if(n == 1){ // Caso base
        cout << "Mover disco " << n << "desde varilla " << varInicial
        << " a varilla" << varFinal << endl;
    }else{  //Caso recursivo
        hanoi(varInicial, varFinal, varCentral, n - 1);
        cout << "Mover disco " << n << "desde varilla " << varInicial
        << " a varilla " << varFinal << endl;
        hanoi(varCentral, varInicial, varFinal, n-1);
    }
}


/* ec: 2^n - 1 */
int main(){
    int numDiscos;
    cout << "Numero de discos: "; cin >> numDiscos;
    cout << "\t El numero de movimientos son: " << pow(2, numDiscos) - 1 << endl;
    hanoi('A', 'B', 'C', numDiscos);
    return 0;
}