#include <iostream>
using namespace std;
// el objeticvo de del programa sera solicitar al usuario N números y calcula su promedio.
int main() {
    int N, numero, suma = 0;

    // Solicitar al usuario cuántos números desea ingresar
    cout << "Ingrese la cantidad de números que desea promediar: ";
    cin >> N;

    // Verificar que N sea un número positivo
    if (N <= 0) {
        cout << "La cantidad de números debe ser un número positivo." << endl;
        return 1;
    }

    // Solicitar los números al usuario y calcular la suma
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numero;
        suma += numero;
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / N;

    // Imprimir el resultado
    cout << "El promedio de los " << N << " números ingresados es: " << promedio << endl;

    return 0;
}