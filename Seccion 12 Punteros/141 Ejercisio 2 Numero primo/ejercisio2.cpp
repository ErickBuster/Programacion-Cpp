/* Determinar si un numero es primo o no;
con punteros y ademas indicar en que posicion de memoria
se guardo el numero */
#include <iostream>
using namespace std;
int main(){
    int numero, *p_num;
    p_num = &numero;

    cout << "Ingrese el numero: "; cin >> numero;
    int cont = 0;
    for(int i = 1; i <= *p_num; i++){
        if(*p_num%i == 0){
            cont++;
        }
    }
    if(cont <= 2){
        cout << "El numero " << *p_num << " es primo " << endl;
    }else{
        cout << "El numero "<< *p_num << " No es primo " << endl;    
    }

    cout << "La direccion es: " << p_num << endl;
    return 0;
}