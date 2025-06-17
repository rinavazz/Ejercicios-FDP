#include <iostream>
using namespace std;

int main() {
    int n, binario = 0, base = 1;
    cout << "Ingresa un número decimal: ";
    cin >> n;
    while (n > 0) {
        binario += (n % 2) * base;
        n /= 2;
        base *= 10;
    }
    cout << "Binario: " << binario;
    return 0;
}
