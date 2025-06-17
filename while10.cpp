#include <iostream>
using namespace std;

int main() {
    int n, digitos = 0;
    cout << "Ingresa un número: ";
    cin >> n;
    if (n == 0) digitos = 1;
    while (n != 0) {
        digitos++;
        n /= 10;
    }
    cout << "Tiene " << digitos << " dígitos.";
    return 0;
}
