/* Diagrama de clase
    Arreglo<T>
    -arreglo : T*
    -indice : int
    -nElementos : int
    Arreglo(int n)
    +Agregar(T) : void
    +arregloLLeno() : bool
    +mostrarArreglo() : void
    +vaciarArreglo() : void */
#include <iostream>
using namespace std;

template <class T>
class Arreglo{
    //Atributos
    private:
        T *arreglo;
        T valor;
        int indice;
        const static int ELEMENTOS = 3;
        int tamanio;
    public:
        Arreglo(){
            arreglo = new T[ELEMENTOS];
            indice = 0;
            tamanio = ELEMENTOS;
        }
        ~Arreglo(){
            delete[] arreglo;
        }
        T & pedirValor(){
            cout << "Digite un elemento: ";
            cin >> valor;
            return valor;
        }
        void agregarDato(const T &dato){
            if(arregloLLeno()){
                cout << "Arreglo lleno, expandiendo el arreglo..." << endl << endl;
                aumentarArreglo();
            }
            arreglo[indice++] = dato;
        }
        bool arregloLLeno(){
            return indice == tamanio ? true : false;
        }
        void mostrarDatos(){
            for(int i = 0; i < indice; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl << endl;
        }
        void vaciarArreglo(){
            for(int i = 0; i < indice; i++){
                arreglo[i] = 0;
            }
            indice = 0;
        }
        void aumentarArreglo(){
            T *arreglo_temporal = new T[tamanio + ELEMENTOS];
            for(int i = 0; i < indice; i++){
                arreglo_temporal[i] = arreglo[i];
            }
            delete[] arreglo;
            arreglo = arreglo_temporal;
            tamanio += ELEMENTOS;
        }
};