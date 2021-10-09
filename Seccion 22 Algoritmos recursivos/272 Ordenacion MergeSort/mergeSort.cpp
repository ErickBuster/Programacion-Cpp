#include <iostream>
using namespace std;

void mezcla(int *a, int izquierda, int medio, int derecha){
    int *arregloTemporal;
    int i, k, z;
    arregloTemporal = new int[derecha-izquierda+1];
    i = z = izquierda;
    k = medio + 1;
    //ordenamos los elementos en el arreglo arregloTemporal[]
    while(i <= medio && k <= derecha){ // 
        if(a[i] <= a[k]){
            arregloTemporal[z] = a[i];
            z++;    i++;
        }else{
            arregloTemporal[z] = a[k];
            z++;    k++;
        }
    }
    while (i <= medio){
        arregloTemporal[z] = a[i];
        z++;    i++;
    }
    while (k <= derecha){
        arregloTemporal[z] = a[k];
        z++;    k++;
    }
    //copiando los elementos arregloTemporal hacia mi arreglo a
    for(int i = izquierda; i <= derecha; i++){
        cout << arregloTemporal[i] << " ";
        a[i] = arregloTemporal[i];
    }
     delete[] arregloTemporal;
}
void mergeSort(int a[], int primero, int ultimo){
    int central;
    if(primero < ultimo){
        central = (primero + ultimo) / 2;
        mergeSort(a, primero, central); // Ordenamos la sublista izquierda
        mergeSort(a, central+1, ultimo);    // Ordenamos la sublista derecha
        mezcla(a, primero, central, ultimo); // mezclar los elementos ordenados
    }
}
int main(){
    int arreglo[] = {9,1,3,0,6,7,2,12};
    int p = 0;
    int u = sizeof(arreglo)/sizeof(int);
    cout << "\tArreglo desordenado" << endl;
    for(int i = 0; i < u; i++){
        cout << arreglo[i] << " ";
    } 
    cout << endl << endl;
    cout << u << endl << endl;
    
    mergeSort(arreglo, p, u-1);
    
    cout << endl << endl;
    cout << "\tArreglo ordenado" << endl;
    for(int i = 0; i < u; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl << endl;
    return 0;
}