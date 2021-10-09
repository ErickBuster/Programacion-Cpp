#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[20] = "Hola";
    char m[20] = "Hola";

    cout << (strcmp(n,m) == 0 ? "Ambas cadenas son iguales " : "Ambas cadenas NO son iguales ");
    cout << endl;
    return 0;
}