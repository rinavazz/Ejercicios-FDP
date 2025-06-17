#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n1. Saludar\n2. Despedirse\n3. Salir\nOpción: ";
        cin >> opcion;
        if (opcion == 1)
            cout << "¡Hola!\n";
        else if (opcion == 2)
            cout << "¡Adiós!\n";
    } while (opcion != 3);
    return 0;
}
