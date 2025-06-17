#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingresa dos números: ";
    cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "MCD: " << a;
    return 0;
}
