/*encontrar el numero mayor */
#include <iostream>
using namespace std;

int encontrarMaximo(int, int);

int main(){
    int n1, n2;
    int mayor;

    cout << "Digite 2 numeros: ";
    cin >> n1 >> n2;
    mayor = encontrarMaximo(n1, n2);
    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}

int encontrarMaximo(int x, int y){
    int numMaximo;
    x > y ? numMaximo = x : numMaximo = y;
    return numMaximo;
}