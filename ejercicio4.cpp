#include <iostream>
using namespace std;
// el objetivo sera pedirle al usuario un numero natural y mostrar la tbal de multiplicar de dicho numero 
int main() {
    int numero;

    // Solicitar un número al usuario
    cout << "Ingrese un número: ";
    cin >> numero;

    // Imprimir la tabla de multiplicar del número ingresado
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}