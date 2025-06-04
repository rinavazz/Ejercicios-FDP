/*Adivina el Número
Genera un número aleatorio entre 1 y 100. El usuario debe adivinarlo, 
y el programa debe indicar si el número es mayor o menor hasta que lo acierte.

*/

#include <iostream>

using namespace std;

int main(void){

    int numeroCorrecto = 17; //dato quemado
    int intento;

    cout << "Ingrese un numero entre 1 y 100: ";
    cin >> intento;

    while(intento != numeroCorrecto){
        
        if(intento < numeroCorrecto){
            cout << "El numero secreto es mayor, intenta de nuevo: ";
        }else{
            cout << "El numero secreto es menor, intenta de nuevo: ";
        }
        cin >> intento;
    }

    cout << "adivinaste el numero!";





    return 0;
}