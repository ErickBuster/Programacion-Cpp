/* Hacer un programa que determine si una palabra es 
polindroma */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char n[20];
    char m[20];
    cout << "\tPalindromo" << endl;
    cout << "Ingrese una palabra: " << endl;
    cin.getline(n,20,'\n');
    strcpy(m,n);
    strrev(m);
    cout << ((strcmp(n,m) == 0) ? "Son " : "No son ");
    cout << "palindromos";
    return 0;
}