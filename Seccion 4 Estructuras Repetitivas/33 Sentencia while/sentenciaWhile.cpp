/*La sentencia While:
    While(expresion logica){
        conjunto de instrucciones
    }
    */
#include <iostream>
using namespace std;
int main(){
    int i = 0;
    while (i <= 10){
        cout << i << endl;
        i++;
    }
    while (i > 0){
        cout << i << endl;
        i--;
    }
    return 0;
}