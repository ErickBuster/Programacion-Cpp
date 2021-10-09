#include <iostream>
using namespace std;
int main(){
    cout << "Ingrese un numero entre el 1 - 5: ";
    int n; cin >> n;

    switch (n){
    case 1:
        cout << "Numero 1" << endl;
        break;
    case 2:
        cout << "Numero 2" << endl;
        break;
    case 3:
        cout << "Numero 3" << endl;
        break;
    case 4:
        cout << "Numero 4" << endl;
        break;
    case 5:
        cout << "Numero 5" << endl;
        break;
    default:
        cout << "Numero fuera del rango " << endl;
        break;
    }
    system("pause");
    return 0;
}