/*Realice un programa que solicite al usuario que 
piense un numero entero entre el 1 y el 100. el programa
debe generar un numero aleatorio en ese mismo al numero aleatorio,
asi hasta que lo adivine y por ultimo mostrarle el numero de intentos 
que le llevo

Variable  =  limite_inferior + rand() % (limite_superior + 1 - limite_inferior); */
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n, a, cont = 0;
    a = 1 + rand() % (100);
    do{
        cout << "Ingrese el numero: "; cin >> n;
        cout << (n > a ? "Muy alto \n" : "Muy abajo \n");
        cont++;
    }while(a != n);
    cout << "Le atinaste!! , numero de intentos " << cont << endl;
    return 0;
}