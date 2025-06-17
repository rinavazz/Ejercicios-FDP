#include <iostream>
using namespace std;

int main() {
    int n, original, reverso = 0;
    cout << "Ingresa un número: ";
    cin >> n;
    original = n;
    while (n > 0) {
        reverso = reverso * 10 + n % 10;
        n /= 10;
    }
    if (original == reverso)
        cout << "Es capicúa";
    else
        cout << "No es capicúa";
    return 0;
}
