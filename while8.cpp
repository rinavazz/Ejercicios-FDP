#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    int count = 0;
    while (true) {
        cout << "Ingresa una nota (negativa para terminar): ";
        cin >> nota;
        if (nota < 0) break;
        suma += nota;
        count++;
    }
    if (count > 0)
        cout << "Promedio: " << suma / count;
    else
        cout << "No se ingresaron notas válidas.";
    return 0;
}
