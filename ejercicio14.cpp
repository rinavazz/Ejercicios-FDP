/*anio Bisiesto
Pide un anio y determina si es bisiesto.*
En el calendario gregoriano, un anio es bisiesto si: 
Es divisible por 4, pero no por 100
Si es divisible por 100, también debe ser divisible por 400.*/

#include <iostream>

using namespace std;

int main(void){

     int anio; 
    
     cout << "Ingresa un anio: ";
     cin >> anio;

    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        cout << anio << " es un anio bisiesto"; 
    }else{
        
        cout << anio << " no es un anio bisiesto";

    }

    return 0;

}