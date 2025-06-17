#include <iostream>
using namespace std;

int main() {
    int a, b, cociente = 0;
    cout << "Ingresa dividendo y divisor: ";
    cin >> a >> b;
    while (a >= b) {
        a -= b;
        cociente++;
    }
    cout << "Cociente: " << cociente << ", Resto: " << a;
    return 0;
}
