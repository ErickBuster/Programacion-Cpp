/*realice una funcion que tome como parametros un vector
y su tamanio y diga si el vector esta ordenado crecientemente
Sugerencia: compruebe que para todas las posiciones
del vector, salvo para la 0, el elemento del vector
es mayor o igual que el elemento que le procede en el 
vector*/
#include <iostream>
using namespace std;

void pedirDatos();
void vectorOrdenado();
int vec[100], tam;
int main(){
    pedirDatos();
    vectorOrdenado();
    
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el tamanio del vector: ";
    cin >> tam;
    for(int i = 0; i < tam; i++){
        cout << ">>: "; cin >> vec[i];
    }
}

void vectorOrdenado(){
    bool T = false;
    int  i = 0;
    while ((!T) && (i < tam - 1)){
        if(vec[i] > vec[i+1]){
            T = true;
        }
        i++;
    }
    if(!T){
        cout << "El arreglo esta ordenado crecientemente" << endl;
    }else{
        cout << "El arreglo No esta ordenado" << endl;
    }
}