/*Velocidad y Multa
Pide la velocidad de un conductor. 
Si supera los 60 km/h, se le aplica una multa; si supera los 80 km/h, la multa es mayor.*/

#include <iostream>

using namespace std;

int main(void){

    int velocidad, multa = 50;

    cout << "Ingrese su velocidad: ";
    cin >> velocidad;

    if(velocidad > 80){
        cout << "Usted ha recibido una multa GRAVE por superar los 60km/h ";
    }else if(velocidad > 60 ){
    
        cout << "Usted ha recibido una multa por superar los 60km/h ";
    }else{
        cout << "Usted no ha recibido multas";
    }


    return 0;
}