//Solicita una calificación del 0 al 100 y muestra su equivalente en letras (A, B, C, D, F).

#include <iostream>

using namespace std;

int main(){

    int nota;

    cout << "Ingrese la nota del 0 al 100:\n";
    cin >> nota;

    if(nota <= 20){
        cout << "Su nota es F";
    }else if(nota > 20 && nota <= 40){
        cout << "Su nota es D";
    }else if(nota >40 && nota <= 60){
        cout << "Su nota es C";
    }else if(nota >60 && nota <= 80){
        cout << "Su nota es de B";
    }else if(nota >80 && nota <=100){
        cout << "Su nota es A";
    }else{
        cout << "No esta dentro del rango solicitado";
    }


    return 0;
}