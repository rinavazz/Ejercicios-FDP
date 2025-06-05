#include <iostream>
using namespace std;

int main() {
    int peso;
    int tarifa;

    cout << "Ingresa el peso del paquete (en kg): ";
    cin >> peso;

    if (peso <= 5) {
        tarifa = 5;
    } else if (peso <= 10) {
        tarifa = 10;
    } else {
        tarifa = 15;
    }

    cout << "La tarifa de envío es: $" << tarifa << endl;

    return 0;
}
