#include <iostream>
#include <string>  // Para usar strings y almacenar el binario
using namespace std;

int main() {
    int numero;
    char opcion;

    do {
        cout << "Ingrese un número decimal: ";
        cin >> numero;

        if (numero < 0) {
            cout << "Por favor, ingrese un número positivo." << endl;
        } else {
            string binario = "";

            if (numero == 0) {
                binario = "0";
            } else {
                int temp = numero;

                while (temp > 0) {
                    int residuo = temp % 2;
                    binario = to_string(residuo) + binario;  // Agrega el dígito al inicio
                    temp = temp / 2;
                }
            }

            cout << "El número " << numero << " en binario es: " << binario << endl;
        }

        // Preguntar si desea convertir otro número
        cout << "¿Desea convertir otro número? (s para sí / otra tecla para salir): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    return 0;
}
