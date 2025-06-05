#include <iostream>
#include <string> 
using namespace std;

int main() {
    int numero;
    char opcion;

    do {
        cout << "Ingrese un número: ";
        cin >> numero;

        
        string original = to_string(numero);
        string invertido = "";

       
        for (int i = original.length() - 1; i >= 0; i--) {
            invertido += original[i];
        }

        
        if (original == invertido) {
            cout << "El número " << numero << " es capicúa." << endl;
        } else {
            cout << "El número " << numero << " no es capicúa." << endl;
        }

        // Preguntar si quiere probar con otro número
        cout << "¿Desea verificar otro número? (s para sí / otra tecla para salir): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    return 0;
}
