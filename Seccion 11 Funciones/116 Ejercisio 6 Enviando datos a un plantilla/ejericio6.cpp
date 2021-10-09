/* escriba una plantlla de funcion llamada despliegue
el valor del argumento unico que se le transmite cuando
es invocado la funcion */
#include <iostream>
using namespace std;

template <class ALL>
void despliegue(ALL dato);

int main(){
    int n1 = 1536;
    float n2 = 13.25;
    double n3 = 156.161889;
    char a = 'a';

    despliegue(n1);
    despliegue(n2);
    despliegue(n3);
    despliegue(a);

    return 0;
}

template <class ALL>
void despliegue(ALL dato){
    cout << dato << endl;
}