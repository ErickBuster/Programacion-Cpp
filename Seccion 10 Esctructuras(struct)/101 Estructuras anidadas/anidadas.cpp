#include <iostream>
using namespace std;

struct info_direccion{
    char direccion[20];
    char ciudad[20];
    char estado[20];
};
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado; // structura anidada
    double salario;
}empleados[2];

int main(){

    // pidiendo datos
    for(int i = 0; i < 2; i++){
        fflush(stdin); // vaciar el buffer y permitir digitar los valores
        cout << "Ingrese el nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');   
        cout << "digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 20, '\n');
        cout << "digite su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
        cout << "Ingrese su estado: ";
        cin.getline(empleados[i].dir_empleado.estado,20,'\n');
        cout << "Ingrese su salario: ";
        cin >> empleados[i].salario;
    }

    // mostrando datos.
     for(int i = 0; i < 2; i++){
        cout << "nombre: " << empleados[i].nombre << endl;
        cout << "direccion: " << empleados[i].dir_empleado.direccion << endl; 
        cout << "ciudad: " << empleados[i].dir_empleado.ciudad << endl;
        cout << "estado: " << empleados[i].dir_empleado.estado << endl;
        cout << "salario: " << empleados[i].salario << endl;
    }
    return 0;
}