#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[] = "Luis";
    char m[] = {'L','U','I','S'};
    char nombre[5];
    char nombre2[5];

    cout << "Ingrese su nombre: ";
    cin.getline(nombre2,5,'\n');
    //gets(nombre);
    cout << nombre2 << endl;

    return 0;
}