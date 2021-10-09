#include <iostream>
using namespace std;
int main(){
    int a[] = {10,4,1,2,5,3,9,8,7,6};
    int i, dato;
    char band = 'F';

    cout << "\tLista de datos \n";
    for(i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Ingrese el dato a buscar: ";
    cin >> dato;
    //Busqueda secuencial
    i = 0;
    while ((band == 'F') && (i < 10)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }
    cout << "El numero a buscar ";
    /*if(band == 'F'){
        cout << "No existe " << endl;
    }else{
        cout << "existe " << endl;
    }*/
    cout << (band == 'F' ? "No existe " : "existe ") << endl;
    return 0;
}