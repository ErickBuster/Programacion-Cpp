//Contenedor Asociativo - Set y Multiset
#include <iostream>
#include <iterator>
#include <time.h>
#include <algorithm>
#include <set>  //Para set y multiset
using namespace std;

template <class T>
void formasMostrar(T const &valor){
    cout << "Mostrando con iterador" << endl;
    set<int>::iterator it;
    for(it=valor.begin(); it!=valor.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Mostrando auto" << endl;
    for(auto i : valor){
        cout << i << " ";
    }
    cout << endl;

    cout << "Mostrando con for_each" << endl;
    for_each(valor.begin(), valor.end(), [](int i){cout << i << " ";});
    cout << endl;

    cout << "Mostrando con copy" << endl;
    // ostream_iterator<int> salida(cout, " ")
    // copy(valor.begin(), valor.end(), salida);
    copy(valor.begin(), valor.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}
int randoms(){
    srand(time(NULL));
    return (1 + rand()%30);
}
template<class T>
void insertarNumeros(T &valor){
    while(valor.size() < 10){
        valor.insert(randoms());
    } 
}
int main(){
    /* no se pueden agregar valores duplicados y los agrega ordenados */
    set<int> valor; //Creando un set
    insertarNumeros(valor);
    /* valor.insert(3);
    valor.insert(1);
    valor.insert(5);
    valor.insert(4);
    valor.insert(8);*/
    cout << "Tamanio: " << valor.size() << endl;
    valor.insert(10);
    valor.insert(5);    //ignorara el valor ya que se duplicara
    /* Mostrar el set */
    formasMostrar(valor);
    /* Busqueda de un elemento  */
    set<int>::iterator i = valor.find(randoms());
    if(i != valor.end()){
        cout << "Elemento " << *i << " fue encontrado" << endl;
    }else{
        cout << "Elemento no existe" << endl;
    }
    /* Eliminar valores */
    valor.erase(5);
    formasMostrar(valor);

    
    return 0; 
}