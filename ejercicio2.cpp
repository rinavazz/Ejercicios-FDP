/*Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.

*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingresa numeros para sumarlos. Escribe 0 para terminar.\n";

    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cin >> numero;
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}
