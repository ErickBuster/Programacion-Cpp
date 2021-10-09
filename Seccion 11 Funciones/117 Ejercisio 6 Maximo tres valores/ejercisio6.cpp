/* Escriba una plantilla de funcion llamda maximo()
que devuelva el valor maximo de tres argumentos que 
se transmitan a la funcion cuando sea llamada 
suponga que los tres argumentos seran del mismo tipo
de datos */
#include <iostream>
using namespace std;
template <class T>
T maximo(T, T, T);

int main(){
    int dato1 = 13155, dato2 = 1315, dato3 = 153;
    float dat1 = 123.21, dat2 = 153.217, dat3 = 153.2156;
    char c = 'd', c2 = 'a', c3 = 'v';
    cout << "El maximo valor es: " << maximo(dato1,dato2,dato3) << endl;
    cout << "El maximo valor es: " << maximo(dat1,dat2,dat3) << endl;
    cout << "El maximo valor es: " << maximo(c,c2,c3) << endl;
    return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3){
    T max;
    if(dato1 > dato2 && dato1 > dato3){
        max = dato1;
    }else if(dato2 > dato3){
        max = dato2;
    }else{
        max = dato3;
    }
    return max;
}