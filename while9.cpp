#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cout << "Ingresa un número: ";
    cin >> n;
    while (n > 1) {
        factorial *= n;
        n--;
    }
    cout << "Factorial: " << factorial;
    return 0;
}
