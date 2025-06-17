#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cout << "Ingresa un número positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "No se puede calcular la raíz cuadrada de un número negativo.";
        return 1;
    }

    double raiz = n / 2;  // Aproximación inicial
    double error = 0.0001;  // Precisión deseada

    // Itera hasta que la diferencia entre aproximaciones sea suficientemente pequeña
    while (abs(raiz * raiz - n) > error) {
        raiz = (raiz + n / raiz) / 2;
    }

    cout << "Aproximación de la raíz cuadrada: " << raiz << endl;
    return 0;
}
