#include <iostream>
using namespace std;

int main() {
    int n, numero;
    int numeros[100]; // Arreglo para guardar hasta 100 números
    int i = 0;
    int j;
    int esRepetido; 

    cout << "¿Cuántos números quieres ingresar? (máximo 100): ";
    cin >> n;

    do {
        cout << "Ingresa un número entre 1 y 100: ";
        cin >> numero;

        esRepetido = 0; 
        
        for (j = 0; j < i; j++) {
            if (numeros[j] == numero) {
                esRepetido = 1; // Está repetido
                break;
            }
        }

        if (esRepetido == 1) {
            cout << "Ese número ya fue ingresado. Intenta con otro.\n";
        } else {
            numeros[i] = numero; 
            i++;
        }

    } while (i < n);

    
    cout << "\nNúmeros ingresados sin repetirse:\n";
    for (i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
