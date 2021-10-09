/*Realiza una funcion que tome como parametros un
 vector de numeros y su tamanio y cambie el signo de los
 elementos del vector */
 #include <iostream>
using namespace std;

void pedirDatos();
void cambiandoSigno();
void mostrarDatos();

int vec[100], tam;

int main(){
    pedirDatos();
    cambiandoSigno();
    mostrarDatos();
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el tamanio del vector: ";
    cin >> tam;
    for(int i = 0; i < tam; i++){
        cout << ">>: "; cin >> vec[i];
    }
}

void cambiandoSigno(){
    for(int i = 0; i < tam; i++){
        vec[i] *= (- 1);
    }
}

void mostrarDatos(){
    for(int i = 0; i < tam; i++){
        cout << vec[i] << " ";
    }
}