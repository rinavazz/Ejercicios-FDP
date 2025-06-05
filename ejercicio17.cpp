#include <iostream>
using namespace std;

int main() {
    int edad;
    int precio = 0;

    cout << "Bienvenido al parque.\n";
    cout << "Por favor, ingresa tu edad: ";
    cin >> edad;

    if (edad < 0) {
        cout << "Edad no válida.\n";
    } else if (edad < 5) {
        precio = 0;
        cout << "La entrada es gratuita para niños menores de 5 años.\n";
    } else if (edad <= 12) {
        precio = 5;
        cout << "El precio de entrada es $5.\n";
    } else {
        precio = 10;
        cout << "El precio de entrada es $10.\n";
    }

    return 0;
}
