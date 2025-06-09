#include <iostream>
using namespace std;
// el objetivo del programa sera Solicitar un número N al usuario y calcula la suma de los primeros N números naturales.
int main() {
    int N, suma = 0;

    // Solicitar un número N al usuario
    cout << "Ingrese un número natural N: ";
    cin >> N;

    // Calcular la suma de los primeros N números naturales
    for (int i = 1; i <= N; ++i) {
        suma += i;
    }

    // Imprimir el resultado
    cout << "La suma de los primeros " << N << " números naturales es: " << suma << endl;

    return 0;
}