#include <iostream>
using namespace std;

int main() {
    string usuarioCorrecto = "melanievmz";
    string contrasenaCorrecta = "oreo123";

    string usuarioIngresado, contrasenaIngresada;

    // Primer intento
    cout << "Ingresa el usuario: ";
    cin >> usuarioIngresado;
    cout << "Ingresa la contraseña: ";
    cin >> contrasenaIngresada;

    if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
        cout << "¡Acceso concedido!" << endl;
    } else {
        // Segundo intento
        cout << "Usuario o contraseña incorrectos. Intenta de nuevo." << endl;
        cout << "Ingresa el usuario: ";
        cin >> usuarioIngresado;
        cout << "Ingresa la contraseña: ";
        cin >> contrasenaIngresada;

        if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
            cout << "¡Acceso concedido!" << endl;
        } else {
            // Tercer intento
            cout << "Usuario o contraseña incorrectos. Intenta de nuevo." << endl;
            cout << "Ingresa el usuario: ";
            cin >> usuarioIngresado;
            cout << "Ingresa la contraseña: ";
            cin >> contrasenaIngresada;

            if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
                cout << "¡Acceso concedido!" << endl;
            } else {
                cout << "Has agotado los intentos. Acceso denegado." << endl;
            }
        }
    }

    return 0;
}
