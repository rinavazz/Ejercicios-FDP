#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;

    cout << "Ingresa la edad del conductor: ";
    cin >> edad;

    cout << "Ingresa el número de infracciones: ";
    cin >> infracciones;

    cout << "Ingresa los años de experiencia: ";
    cin >> experiencia;

    if (edad < 18) {
        cout << "No puede conducir legalmente." << endl;
    } else if (infracciones > 5) {
        cout << "Conductor en estado peligroso por muchas infracciones." << endl;
    } else if (experiencia < 2) {
        cout << "Conductor con poca experiencia." << endl;
    } else {
        cout << "Conductor en buen estado." << endl;
    }

    return 0;
}
