/* Plantillas de Funciones:
    Una plantilla de funcion es un modelo de funcion que
    el compilador de C++ usara para construir diferentes versiones 
    de una misma funcion, segun los tipos de datos que se especifiquen
    al invocar a la misma. La plantilla permite escribir funciones que 
    difieren exclusicamente en el tipo de datos que manejan 

    Para definir una plantilla de funcion se aplica la siguiente sintaxis:

    template<class T1, class T2,..., class Tn> -> plantillas de clases
    template<typename T1, typename T2,..., typename Tn> - > plantillas de funciones
*/
#include <iostream>
using namespace std;

//Plantilla de funcion
template <typename T, class T2>
T Mayor(T dato1, T2 dato2){
    if(dato1 >= dato2){
        return dato1;
    }else{
        return dato2;
    }
}
int main(){

    cout << "Mayor es: " << Mayor(5,9) << endl;
    cout << "Mayor es: " << Mayor(15.15,9.80) << endl;
    cout << "Mayor es: " << Mayor('g', 'z') << endl;
    cout << "Mayor es: " << Mayor(55.15,6) << endl;
    return 0;
}
