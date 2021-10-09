/*realice una funcion que tome como parametros
un vector de enteros y su tamanio e imprima un vector
con los elemtnso impares del vector recibido */
#include <iostream>
using namespace std;

void pedirDatos();
void numImpares();
void mostrarDatos(int impar[], int);

int numeros[100], tam;

int main(){
    pedirDatos();
    numImpares();
    
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el tamanio: ";
    cin >> tam;

    for(int i = 0; i < tam; i++){
        cout << ">>: ";
        cin >> numeros[i];
    }
}

void numImpares(){
    int impares[tam], pos = 0;

    for(int i = 0; i < tam; i++){
        if((numeros[i]%2) != 0){
            impares[pos] = numeros[i];
            pos++;
        }
    }
    mostrarDatos(impares, pos);
}

void mostrarDatos(int impar[], int p){
    cout << "Los numeros impares son: " << endl;
    for(int i = 0; i < p; i++){
        cout << impar[i] << " ";
    }
}
