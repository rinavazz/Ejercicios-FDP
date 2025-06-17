#include <iostream>
using namespace std;

int main() {
    int n, suma;
    cout << "Ingresa un número: ";
    cin >> n;
    do {
        suma = 0;
        while (n > 0) {
            suma += n % 10;
            n /= 10;
        }
        n = suma;
    } while (suma >= 10);
    cout << "Suma final: " << suma;
    return 0;
}
