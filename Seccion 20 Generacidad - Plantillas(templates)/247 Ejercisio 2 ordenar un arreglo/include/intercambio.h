template <typename T>
void intercambiar(T &dato1, T &dato2){
    T aux = dato1;
    dato1 = dato2;
    dato2 = aux;
}