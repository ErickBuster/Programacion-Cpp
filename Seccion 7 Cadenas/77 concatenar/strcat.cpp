#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char c1[] = "Esto es una cadena ";
    char c2[] = "de ejemplo";
    char c3[50];
    strcpy(c3, c1);
    strcat(c3, c2);

    cout << c3 << endl;
}