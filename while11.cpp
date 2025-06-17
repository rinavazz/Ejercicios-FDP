#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Ingresa un número entre 1 y 10: ";
        cin >> num;
    } while (num < 1 || num > 10);
    cout << "Correcto.";
    return 0;
}
