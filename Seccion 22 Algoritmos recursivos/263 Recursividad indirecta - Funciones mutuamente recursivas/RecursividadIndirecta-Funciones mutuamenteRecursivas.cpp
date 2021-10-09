/* Recursividad indirecta - Funciones mutuamente recursivas:
    La recursividad indirecta se produce cuando una funcion llama a otra,
    que eventualmente terminara llamando de nuevo a la primera funcion.
    ex:
    Hacer un programa que muestre el alfabeto, caracter a caracter, utilizando
    recursividad mutua o indirecta.
 */    
#include <iostream>
using namespace std;

//Prototipos de funciones
void funcionA(char);
void funcionB(char);

int main(){
    cout << "\tALFABETO" << endl;
    funcionA('Z');
    cout << endl << endl;
    return 0;
}
void funcionA(char letra){
    if(letra > 'A'){
        funcionB(letra);
    }
    cout << letra << " ";
}
void funcionB(char letra){
    funcionA(--letra);
}