#include <iostream>
using namespace std;

int main() {
    string clave, intento;
    clave = "1234";
    do {
        cout << "Ingresa la contraseña: ";
        cin >> intento;
    } while (intento != clave);
    cout << "¡Contraseña correcta!";
    return 0;
}
