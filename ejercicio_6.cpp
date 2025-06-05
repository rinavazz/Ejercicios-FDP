#include <iostream>

using namespace std;

int main () {
    int dia;
    
    cout << "dias de la semana:" << endl;
    cout << "1. lunes" << endl;
    cout << "2. martes " << endl;
    cout << "3. miercoles" << endl;
    cout << "4. jueves " << endl;
    cout << "5. viernes" << endl;
    cout << "6. sabado " << endl;
    cout << "7. domingo " << endl;
    cout << "ingrese un numero del 1 al 7 segun el dia:" << endl;
    cin >> dia;
     if (dia >= 1 && dia <= 5 ){
        cout << "es un dia laboral." << endl;

     } else {
        cout << "numero invalido, solo es permitido del 1 al 7." << endl;

     }
    return 0;
}