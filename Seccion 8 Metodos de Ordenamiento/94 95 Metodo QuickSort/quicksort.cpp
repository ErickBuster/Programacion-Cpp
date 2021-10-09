#include <iostream>
#include <string.h>
using namespace std;

void intercambio(int &x, int &y){
    int aux;
    
    aux = x;
    x = y;
    y = aux;
}

//Algoritmo quicksort
void quickSort(int a[], int primero, int ultimo, int &inte){
    int i, j, central;
    int pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;    
    j = ultimo;
    do{
        while(a[i] < pivote) i++;
        while (a[j] > pivote) j--;
        
        if(i <= j){
            intercambio(a[i], a[j]);
            i++;
            j--;
            inte++;
        }
    }while ( i <= j);

    if(primero < j){
        quickSort(a, primero, j, inte); // ordenamos la sublista izq
    }if( i < ultimo){
        quickSort(a, i, ultimo, inte); // ordenando la sublista derecha
    }
}

int main(){

    int a[] = {10,4,1,2,5,3,9,8,7,6};
    int k, intentos = 0;

    cout << "\tLista desordenada \n";
    for(k = 0; k < 10; k++){
        cout << a[k] << " ";
    }
    cout << endl;
    //Algoritmo metodo quicksort
    quickSort(a, 0, 10, intentos);


    cout << "Numero de intentos para ordenar: " << intentos << endl;
    //Orden ascendente
    cout << "\tLista ordenada ascendente\n";
    for(k = 0; k < 10; k++){
        cout << a[k] << " ";
    }
    cout << endl;
    //Orden descendente
    cout << "\tLista ordenada descendente\n";
    for(k = 9; k >= 0; k--){
        cout << a[k] << " ";
    }
    cout << endl;
    return 0;
}
