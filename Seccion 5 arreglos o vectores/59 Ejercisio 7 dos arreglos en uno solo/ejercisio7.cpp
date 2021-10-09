/*realiza un programa qu defina dos vectores de caracteres
y despues almacene el contenido de ambos vectores
en un nuevo vector, situando en primer lugar los elementos
del primer vector seguido por los elementos del segundo vector
muestre el contenido del nuevo vector en la salida estandar */
#include <iostream>
using namespace std;
int main(){
    char l1[] = {'a','b','c','d','e'};
    char l2[] = {'f','g','h','i','j'};
    char l3[10];
    for(int i = 0; i < 5; i++){
        l3[i] = l1[i];
    }
    for(int i = 5; i < 10; i++){
        l3[i] = l2[i-5];
    }
    
    for(int i = 0; i < 10; i++){
        cout << l3[i] << " ";
    }
    cout << endl;
}