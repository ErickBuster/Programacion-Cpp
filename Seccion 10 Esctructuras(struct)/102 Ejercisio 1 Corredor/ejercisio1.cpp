/* Hacer una estructura llamda corredor, en la cual 
se tendran los siguientes campos: nombre, edad, sexo
club, pedir datos al usuario para un corredor, y asi
 una categoria de competicion
 - juvenil <= 18
 - senior <= 40
 - Veterano > 40
 posteriormente imprimir todos los datos del corredor,
 incluida su categoria de competicion */

 #include <iostream>
 #include <string.h>
 using namespace std;

struct corredor{
    char nombre[20], sexo, club[20];
    unsigned int edad;
}c1;

 int main(){
     char categoria[20];
     cout << "nombre: ";
     cin.getline(c1.nombre,20,'\n');
     fflush(stdin);
     cout << "edad: "; cin >> c1.edad;
     cout << "sexo (M / F): "; cin >> c1.sexo;
     fflush(stdin);
     cout << "club: "; cin.getline(c1.club, 20, '\n');

     if(c1.edad <= 18){
         strcpy(categoria, "juvenil");
     }else if(c1.edad > 18 && c1.edad < 40){
         strcpy(categoria, "senior");
     }else{
         strcpy(categoria, "veterano");
     }

     cout << endl << endl;

    cout << "nombre: " << c1.nombre << endl;
     cout << "edad: " << c1.edad << endl;
     cout << "sexo: " << c1.sexo << endl;
     cout << "club: " << c1.club << endl;
     cout << "categoria: " << categoria << endl;
     return 0;
 }