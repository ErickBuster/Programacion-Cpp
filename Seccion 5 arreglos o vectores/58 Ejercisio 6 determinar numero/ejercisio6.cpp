/*Escribe un programa que defina un vector de numeros y calcule 
si existe algun numero en el vector cuyo valor equivale
a la suma del resto de numeros del vector*/
#include <iostream>
using namespace std;
int main(){
    int n[5] = {1,2,3,4,10};
    int s = 0, m = 0;
    for(int i = 0; i < 5; i++){
        s += n[i];
        if(n[i] > m){
            m = n[i];
        }
    }
    if(m == s - m){
        cout << "El numero " << m << " equivale a la suma de los demas" << endl;
    }else{
        cout << "no existe ningun numero que sea igual a la suma del vector " << endl;
    }
}