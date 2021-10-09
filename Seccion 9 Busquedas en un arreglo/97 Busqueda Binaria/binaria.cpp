#include <iostream>
using namespace std;
int main(){
    int a[] = {10,4,1,2,5,3,9,8,7,6};
    int i,j , inf, sup, mitad, dato, aux;
    char band = 'F';

    cout << "Ingrese el dato a buscar: ";
    cin >> dato;

    //Algoritmo metodo burbuja
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(a[j] > a[j+1]){ // numero actual es mayor al siguiente
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
    cout << "\tLista de datos \n";
    for(i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    //Algoritmo busqueda binaria
    inf = 0; 
    sup = 10;
    while(inf <= sup){
        mitad = (inf + sup) / 2;

        if(a[mitad] == dato){
            band = 'V';
            break;
        }if(a[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }if(a[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup)/2;    
        }
    }
    cout << "El numero a buscar ";
    cout << (band == 'F' ? "No existe " : "existe ") << endl;
    return 0;
}