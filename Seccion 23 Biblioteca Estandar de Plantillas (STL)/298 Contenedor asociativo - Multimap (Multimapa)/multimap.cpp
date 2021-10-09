#include <iostream>
#include <map>
#include <iterator>
using namespace std;

typedef pair<int, string> par; //Creacion de un alias

template<class T>
void mostrarMapa(T &valores, int const &clave){
    cout << "Mostrando datos con for" << endl;
    map<int,string>::iterator it;
    if(!clave){
        for(it = valores.begin(); it != valores.end(); it++){
            cout << "clave: " << it->first << " | Valor: " << it->second << endl;
        }
    }else{
        for(it = valores.lower_bound(clave); it != valores.upper_bound(clave); it++){
            cout << it->second << " | ";
        }
    }
    cout << endl << endl;
}
int main(){
    /* Crear un multimap */
    multimap<int, string> valores;
    /* InsertarValores en el map */
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(1, "Raul"));
    valores.insert(par(1, "Martin"));
    valores.insert(par(5, "Maria"));
    // valores[2] = "Juanito"; //insertar valor de otra forma
    /* Mostrando multimap */
    mostrarMapa(valores, 0);
    //Conteo de las claves
    int clave = 5;
    cout << "Contedo de la clave " << clave << ": " << valores.count(clave) << endl;
    mostrarMapa(valores, clave);

    return 0;
}