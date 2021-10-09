/* Realizar un programa que lea un arreglo
de estructuras, los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y 
menor salario */
#include <iostream>
using namespace std;

struct Empleado{
    char nombre[20];
    float salario;
}emp[30];

int main(){
    int n_emp;
    int menor = 0, mayor = 0;
    cout << "Ingrese el numero de empleados: "; cin >> n_emp;
    for(int i = 0; i < n_emp; i++){
        fflush(stdin);
        cout << "Ingrese el nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "Ingrese su salario: ";
        cin >> emp[i].salario;
    }

    cout << endl << endl;

    for(int i = 1; i < n_emp; i++){
        if(emp[i].salario > emp[mayor].salario){
            mayor = i;
        }
        if(emp[i].salario < emp[menor].salario){
            menor = i;
        }
    }
    cout << "\n Mayor salario" << endl;
    cout << "nombre: " << emp[mayor].nombre << endl;
    cout << "salario: " << emp[mayor].salario << endl;

    cout << "\n Menor  salario" << endl;
    cout << "nombre: " << emp[menor].nombre << endl;
    cout << "salario: " << emp[menor].salario << endl;
    
    return 0;
}