#include <iostream>

using namespace std;

int main (){
    // aqui determino la variable de la calificacion
    float calificacion;

    // solicito la calificacion con rango de 10 a 100
    cout<< "ingresa tu calificacion (con rango de 10 a 100)";
    cin >> calificacion;

    // aqui validamos que la calificacion este dentro del rango 
    if (calificacion < 10 || calificacion > 100){
        cout << " la calificacion inf¿gresada no esta dentro del rango" << endl;
        return 0;

    }

    cout << "tu calificacion es:" << calificacion << endl;
    
    if (calificacion >= 60) {
        cout << "el estudiante aprobo la materia" << endl;

    } else {
        cout << "el estudiante reprobo la materia" << endl;

    }
    return 0;

}