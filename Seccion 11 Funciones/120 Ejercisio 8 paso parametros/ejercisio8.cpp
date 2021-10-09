/*Escriba un funcion nombrada cambio() que contenga 
un parametro en numero entero y seis
paramentros de referencia en numero entero nombrados
cien, cincuenta, veinte, diez, cinco y  uno, respectivamente
La funcion tiene que considerar el valor entero
trnasmitido como una cantidad en dolares y convertir
el valor en el numero menor de billetes equivalentes */
#include <iostream>
using namespace std;

void cambio2(int &, int &, int &, int &, int &, int &, int &);

int main(){
    int valor, cien, 
    cincuenta, veinte, 
    diez, cinco, uno;

    cout << "Digite la cantidad: "; 
    cin >> valor;

    cambio2(valor,cien, cincuenta,veinte, diez, cinco, uno);

    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cincuenta << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "Diez: "<< diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Uno: " << uno << endl;

    return  0;
}

void cambio2(int &valor, int &c, int &cin, int &veinte, int &d,int &cinco,int &u){
    c = valor / 100;
    valor %= 100;
    cin = valor / 50;
    valor %= 50;
    veinte = valor / 20;
    valor %= 20;
    d = valor / 10;
    valor %= 10;
    cinco = valor / 5;
    valor %= 5;
    u = valor / 1;
    valor %= 1;
}
