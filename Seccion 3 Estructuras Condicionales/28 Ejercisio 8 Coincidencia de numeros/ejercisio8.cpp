/*Escriba un programa que lea de la entrada estandar 
tres numeros. despues debe leer un cuarto numero e
indicar si el numero coincide con alguno de los introdicuos anterioridad */
#include <iostream>
using namespace std;
int main(){
    int n[3], m;
    cout << "Ingrese los primeros 3 numeros: " << endl;
    for(int i = 0; i < 3; i++){
        cin >> n[i];
    }
    cout << "Ingrese el cuarto numero :"; cin >> m;
    for(int i = 0; i < 3; i++){
        if(m == n[i]){
            cout << "El numero " << m << " si coincide" << endl;
            exit(0);
        }else if(i == 2){
            cout << "No coincide con ninguno" << endl;
        }
    }
    return 0;
}