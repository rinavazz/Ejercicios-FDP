#include <iostream>
using namespace std;

int main (){
    float calificacion;
    float suma = 0;
    int cantidad = 0;

    do{
        cout << "ingrese la calificacion (numero negativo para terminar):";
        cin >> calificacion;

        if (calificacion >= 0){
            suma += calificacion;
            cantidad ++;

        }
    } while (calificacion >= 0);

    if (cantidad > 0){
        float promedio = suma / cantidad;
        cout << "el promedio es:" << promedio << endl;

    } else {
        cout << "no se ingresaron calificaciones validas" << endl;
    }
    return 0;
}