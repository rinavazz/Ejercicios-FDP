#include <iostream>
using namespace std;

int main() {
    int numero;
    int digitos = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero == 0) {
        digitos = 1;  // El 0 tiene un dígito
    } else {
        do {
            numero = numero / 10;
            digitos++;
        } while (numero != 0);
    }

    cout << "El número tiene " << digitos << " dígito(s)." << endl;

    return 0;
}
