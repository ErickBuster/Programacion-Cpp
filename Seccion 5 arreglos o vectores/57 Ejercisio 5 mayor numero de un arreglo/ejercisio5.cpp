/*desarrolle un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemento del vector */
#include <iostream>
using namespace std;
int main(){
    int n[10] = {1,6,7,9,21,2,-5,3,9,15};
    int m = 0;
    for(int i = 0; i < 10; i++){
        if( n[i] > m){
            m = n[i];
        }
    }
    cout << "El numero mayor es: " << m << endl;
    return 0;
}
