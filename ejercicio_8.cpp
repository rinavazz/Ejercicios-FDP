#include <iostream>
using namespace std;

int main() {
    int usuarioCorrecto = 1234;
    int contrasenaCorrecta = 5678;

    int usuarioIngresado;
    int contrasenaIngresada;

    cout << "Ingresa tu usuario (número): ";
    cin >> usuarioIngresado;

    cout << "Ingresa tu contraseña (número): ";
    cin >> contrasenaIngresada;

    if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
        cout << "Acceso concedido." << endl;
    } else {
        cout << "Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}
