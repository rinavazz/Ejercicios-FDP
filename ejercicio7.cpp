#include <iostream>
using namespace std;
// el objetivo del programa sera Pedir  un número al usuario y calcula su factorial.
int main()
{
    int numero, factorial = 1;
    // Solicitar un número al usuario
    cout << "Ingrese un número: ";
    cin >> numero;
    // Calcular el factorial del número ingresado
    for (int i = 1; i <= numero; ++i)
    {
        factorial *= i;
    }
    // Imprimir el resultado

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    return 0;
}