#include <iostream>
using namespace std;

const int N = 8;
int reinas[N];

//prototitpos de funciones
void ponerReina(int , bool &);
bool valido(int);
void tablero();

int main(){
    bool solucion;
    int conteo = 0; 
    ponerReina(conteo, solucion);
    if(solucion){
        cout << "\tSi existe combinacion de reinas" << endl;
        tablero();
    }else{
        cout << "\tNo existe combinacion de reinas" << endl;
    }
    return 0;
}
void ponerReina(int i, bool &solucion){
    int k = 0; // inicializamos el conteo de movimientos
    solucion = false;
    do{
        tablero();
        reinas[i] = k; // copiamos la reina i en la fila k
        k++;
        if(valido(i)){
            if(i < (N-1)){
                ponerReina(i +  1, solucion);
                //vuelta atras
                if(!solucion){
                    reinas[i] = 0;
                }
            }else{
                //Ya agregamos todas las reinas
                solucion = true;
            }
        }
    } while (!solucion && (k < N));
}
bool valido(int i){
    /* Comprobar si la reina de la columna i no se amenaza con ninguna
    reina ya puesta */
    bool v = true;
    for(int j = 0; j < i; j++){
        v = v && (reinas[i] != reinas[j]); // comprobar si la fila esta vacia
        v = v && ((reinas[i] - i) != reinas[j] - j); // comprobar con las diagonal 1
        v = v && ((reinas[i] + i) != reinas[j] + j); // comprobar con las diagonal 2
    }
    return v;
}
void tablero(){
    int tablero[N][N];
    //asignamos los valores del tablero a 0
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            tablero[i][j] = 0;
        }
    }
    cout << "\tMostrando arreglo " << endl;
    for(int i = 0; i < N; i++){
        cout << reinas[i] << "|";
    }
    cout << endl << endl;
    //Asignamos el valor del arreglo hacia el tablero
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            tablero[reinas[j]][j] = 1;
        }
    }
    cout << "\tMostrando Tablero" << endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << tablero[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
    

}