//Contenedores Asociativos - set y multiset
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
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
    return rand()%10;
}

template<class T>
void llenarDatos(T &valores){
    while (valores.size() < 30){
        valores.insert(randoms());
    }
}

int main(){
    /* Diferencia del set, que aqui te deja duplicar valores */
    multiset<int> valores;
    /* Insertando valores al multiset */
    llenarDatos(valores);
    /* mostrar datos */
    formasMostrar(valores);

    /* Buscar un elemento */
    multiset<int>::iterator it = valores.find(randoms());
    if(it != valores.end()){
        cout << "Elemento encontrado " << *it << endl;
    }else{
        cout << "Elemento no existe";
    }
    /* Contar cuantas veces aparece un determinado valor */
    int contador = randoms();
    cout << "El elemento " << contador << " aparece: " << valores.count(contador) << endl;

    /* Eliminar un elemento */
    valores.erase(randoms());
    formasMostrar(valores);

    return 0;
}