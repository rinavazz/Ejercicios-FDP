#include <iostream>
using namespace std;
// El objetivo será Mostrar los primeros N términos de la serie de Fibonacci.
int main() {
    int N, a = 0, b = 1, c;

    // Solicitar al usuario el número de términos de la serie de Fibonacci
    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
    cin >> N;

    // Verificar que N sea un número positivo
    if (N <= 0) {
        cout << "El número de términos debe ser un número positivo." << endl;
        return 1;
    }

    // Imprimir los primeros N términos de la serie de Fibonacci
    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= N; ++i) {
        cout << a << " ";
        c = a + b; // Sumar los dos últimos números
        a = b;     // Actualizar a con el valor de b
        b = c;     // Actualizar b con el nuevo valor c
    }
    cout << endl;

    return 0;
}