#include <iostream>
using namespace std;

const int N = 5;
int tablero[N][N];
//Desplazamientos relativos del caballo (mov en L)
int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
void escribirTablero(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            // tablero[i][j] = 0;
            cout << tablero[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl << endl;
}

void saltoCaballo(int movimiento, int x, int y, bool &exito){
    int nx, ny;
    int k = 0; // iterador para controlar los desplazamientos del caballo
    exito = false;

    do{
        k++;
        nx = x + d[k-1][0];
        ny = y + d[k-1][1];
    //Verificando si las coordenadas son correctas
        if((nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) && (tablero[nx][ny] == 0)){
            //Guardamos el movimiento
            tablero[nx][ny] = movimiento;
            escribirTablero();  //Mostramos como el caballo se va moviento
            if(movimiento < N*N){
                saltoCaballo(movimiento+1, nx, ny, exito);
                if(!exito){
                    tablero[nx][ny] = 0;
                }
            }else{
                exito = true;
            }

        }
    }while((k < 8) && !exito);
}

int main(){
    bool exito;
    int fila = 1, columna = 0;
    int moviento = 1;

    tablero[fila][columna] = moviento;
    saltoCaballo(moviento+1, fila, columna, exito);

    if(exito){
        cout << "\tCamino encontrado" << endl;
        escribirTablero();
    }else{
        cout << "\tCamino no encontrado" << endl;
    }
    return 0;
}