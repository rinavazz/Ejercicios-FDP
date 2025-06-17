#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;
    cout << "Ingresa números (0 para terminar): ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        suma += num;
    }
    cout << "Suma total: " << suma;
    return 0;
}
