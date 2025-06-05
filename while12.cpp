#include <iostream>
using namespace std;

int main() {
    int a, b;
    char opcion;

    do {
        cout << "Ingrese el primer número: ";
        cin >> a;
        cout << "Ingrese el segundo número: ";
        cin >> b;

        
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        // Algoritmo de Euclides
        while (b != 0) {
            int resto = a % b;
            a = b;
            b = resto;
        }

        cout << "El MCD es: " << a << endl;

        
        cout << "¿Desea calcular otro MCD? (s para sí / cualquier otra tecla para no): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');  // Si elige 's' o 'S', repite

    return 0;
}
