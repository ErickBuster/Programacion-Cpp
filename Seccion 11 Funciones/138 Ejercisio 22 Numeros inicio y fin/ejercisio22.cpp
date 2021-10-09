/*Escriba una funcion escribe numeros(int ini, int fin)
que devuelva en la salida estandar los numeros del ini al
fin. escriba una version que escriba los numeros en
orden ascendente 
    escribenumeros(ini,fin) = ini
        escribenumeros(ini,fin) , si ini = fin
                si fin > ini*/
#include <iostream>
using namespace std;

int escribeNumeros(int, int);

int main(){
    int ini, fin;
    cout << "Digite el inicio: "; cin >> ini;
    cout << "Difite el fin: "; cin >> fin;

    for(int i = ini; i <= fin; i++){
        cout << escribeNumeros(i, fin) << " ";
    }
    return 0;
}

int escribeNumeros(int inicio, int final){
    if(inicio == final){
        return inicio;
    }else{
        return escribeNumeros(inicio, final-1);
    }
}