/* comprobar si un numero es par o impar y señalar 
la posicion de memoria donde se esta guardando el numero
con punteros */
#include <iostream>
using namespace std;
int main(){
    int numero, *p_numero;
    p_numero = &numero;
    cout << "Ingrese el numero: "; cin >> numero;

    cout << "El numero " << *p_numero ;
    if(*p_numero % 2 == 0){
        cout << " es par " << endl;
    }else{
        cout << " es impar " << endl;
    }
    cout << "La direccion es: "  << p_numero << endl;
    return 0;
}