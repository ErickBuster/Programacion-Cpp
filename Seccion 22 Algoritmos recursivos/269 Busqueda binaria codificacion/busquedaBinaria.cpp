#include <iostream>
using namespace std;

int busquedaBinaria(const int arreglo[],const int dato, int inferior, int superior){
    int mitad;
    if(inferior > superior){
        return -1;
    }else{
        mitad = (inferior + superior) / 2;
        if(dato == arreglo[mitad]){
            return mitad;
        }else if(dato > arreglo[mitad]){
            return busquedaBinaria(arreglo, dato, mitad + 1, superior);
        }else{
            return busquedaBinaria(arreglo, dato, inferior, mitad - 1);
        }
    }
}

int main(){
    int arreglo[10] { 1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};
    int superior = (sizeof(arreglo) / sizeof(int));
    cout << superior << endl;
    int n;
    n = busquedaBinaria(arreglo, 10, 0, superior);
    if(n != -1){
        cout << "Elemento encontrado en posicion " << n << ": " << arreglo[n] << endl;
    }else{
        cout << "elemento no encontrado" << endl;
    }
    
    return 0;
}