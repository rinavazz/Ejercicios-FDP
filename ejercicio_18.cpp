#include <iostream>
using namespace std;

int main() {
    string contrasena1, contrasena2;

    cout << "Ingresa la contraseña: ";
    cin >> contrasena1;

    cout << "Confirma la contraseña: ";
    cin >> contrasena2;

    if (contrasena1 == contrasena2) {
        cout << "Las contraseñas coinciden. Puedes continuar." << endl;
    } else {
        cout << "Las contraseñas no coinciden. Intenta de nuevo." << endl;
    }

    return 0;
}
