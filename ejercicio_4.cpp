#include <iostream>
using namespace std;

int main() {
    int calificacion;

    cout << "Ingresa tu calificación: ";
    cin >> calificacion;

    if (calificacion >= 60) {
        cout << "¡Aprobaste!" << endl;
    } else {
        cout << "Reprobaste." << endl;
    }

    return 0;
}
