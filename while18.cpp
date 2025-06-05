#include <iostream>
using namespace std;

int main() {
    int numeroSecreto, intento, intentosRestantes;
    int opcion;

    do {
        cout << "Ingresa el número secreto (1 a 50): ";
        cin >> numeroSecreto;

        intentosRestantes = 5;
        cout << "\nAhora intenta adivinar el número. Tienes 5 intentos.\n";

        do {
            cout << "Intento #" << (6 - intentosRestantes) << ": ";
            cin >> intento;

            if (intento == numeroSecreto) {
                cout << "Correcto. Adivinaste el número." << endl;
                break;
            } else {
                cout << "Incorrecto. ";
                if (intento < numeroSecreto) {
                    cout << "El número secreto es mayor." << endl;
                } else {
                    cout << "El número secreto es menor." << endl;
                }
            }

            intentosRestantes--;

        } while (intentosRestantes > 0);

        if (intento != numeroSecreto) {
            cout << "Se terminaron los intentos. El número era: " << numeroSecreto << endl;
        }

        cout << "\n¿Deseas jugar otra vez? Escribe 1 para sí o 0 para no: ";
        cin >> opcion;

    } while (opcion == 1);

    return 0;
}
