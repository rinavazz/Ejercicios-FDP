#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;
    while (n >= 0) {
        cout << n << " ";
        n--;
    }
    return 0;
}
