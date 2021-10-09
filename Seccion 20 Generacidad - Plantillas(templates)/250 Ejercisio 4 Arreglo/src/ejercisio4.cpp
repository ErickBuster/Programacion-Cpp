/* Defina una plantilla para la clase Arreglo, la cual podra definir 
valores de distinto tipo, el cual se definira en el momento de la 
instancia, el programa debera tener un menu con las siguientes opciones
    1. Agregar un nuevo elemento al arreglo
    2. Comprobar el espacio en el arreglo
    3. Ver arreglo
    4. Vaciar el arreglo
    5. Salir*/
 #include "arreglo.h"

Arreglo<char> arreglo;

void menu(){
    cout << "\tMENU DE ARREGLO DINAMICO CON PLANTILLA" << endl;
    cout << "1. Agregar un nuevo elemento asize_tl arreglo" << endl;
    cout << "2. Comprobar el espacio en el arreglo" << endl;
    cout << "3. Ver arreglo" << endl;
    cout << "4. Vaciar el arreglo" << endl;
    cout << "5. Salir" << endl;    
}

bool opcionMenu(int const &opcion){
    switch (opcion){
    case 1: 
        arreglo.agregarDato(arreglo.pedirValor());
        break;
    case 2:
        if(arreglo.arregloLLeno()){
            cout << "Arreglo Lleno..." << endl << endl;
        }else{
            cout << "Aun queda espacio en el arreglo" << endl << endl;
        }
        break;
    case 3:
        arreglo.mostrarDatos();
        break;
    case 4:
        cout << "\tVaciando el arreglo" << endl << endl;
        arreglo.vaciarArreglo();
        break;
    case 5:
        return false;
        break;
    }
    return true;
}


int main(){
    int opcion = 0;
    while (opcionMenu(opcion)){
        menu();
        cout << ">>: "; cin >> opcion;   
    }
    return 0;
}