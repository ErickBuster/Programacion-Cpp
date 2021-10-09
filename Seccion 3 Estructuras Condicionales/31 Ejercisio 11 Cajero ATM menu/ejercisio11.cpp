/*Hacer un programa que simule un cajero atm con un 
saldo inicial de 1000 dolares*/
#include <iostream>
using namespace std;
int main(){
    int n , op, saldo = 1000, monto;
    while (1)
    {
        cout << "\tCajero Virtual \n";
        cout << "1. Ingresar dinero en su cuenta" << endl;
        cout << "2. Retirar dinero en su cuenta " << endl;
        cout << "3. Salir" << endl;
        cout << ">> "; cin >> op;

        switch (op)
        {
        case 1:
            cout << "Ingrese el monto: ";
            cin >> monto;
            saldo += monto;
            cout << "Su saldo es: " << saldo << endl;
            break;
        case 2:
            cout << "Ingrese el monto: ";
            cin >> monto;
            if(saldo > monto){
                saldo -= monto;
                cout << "Su saldo es: " << saldo << endl;
            }else{
                cout << "No tiene saldo suficiente " << endl;
            } 
            break;
        case 3:
            cout << "Hasta luego" <<endl;
            exit(0);
        }
    }
    return 0;
}