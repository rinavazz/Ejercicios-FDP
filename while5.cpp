#include <iostream>
using namespace std;

int main() {
    int N, suma = 0, i = 1;
    cout << "Ingresa un número: ";
    cin >> N;
    while (i <= N) {
        if (i % 2 == 0) suma += i;
        i++;
    }
    cout << "Suma de pares: " << suma;
    return 0;
}
