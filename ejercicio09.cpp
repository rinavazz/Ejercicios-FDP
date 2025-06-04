/*Beca para Estudiantes
Un estudiante recibe beca si su promedio es mayor o igual
a 85 y tiene menos de 3 faltas.*/

#include <iostream>

using namespace std;

int main(void){

    int promedio, faltas;

    cout << "Ingrese su promedio\n";
    cin >> promedio;

    cout << "Ingrese el numero de faltas\n";
    cin >> faltas;

    if(promedio >= 85 && faltas < 3){
        cout << "Felicidades! Usted ha obtenido una beca.\n";
    }else{
        cout << "Lo lamentamos, usted no cumple con los requisitos para la beca\n";
    }



    return 0;
}