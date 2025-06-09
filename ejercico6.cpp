#include <iostream>
using namespace std;
// el objetivo sera Solicitar un número N al usuario y calcular la suma de los números pares desde 1 hasta N.
int main() {
    int N, suma = 0;

    // Solicitar un número N al usuario
    cout << "Ingrese un número natural N: ";
    cin >> N;

    // Calcular la suma de los números pares desde 1 hasta N
    for (int i = 2; i <= N; i += 2) {
        suma += i;
    }

    // Imprimir el resultado
    cout << "La suma de los números pares desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}
