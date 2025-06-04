#include <iostream>
using namespace std;

int main() {
    float consumo;

    cout << "Calculadora de tarifa de luz electrica\n";
    cout << "Ingrese el consumo en kWh: ";
    cin >> consumo;

    if (consumo < 0) {
        cout << "Consumo no valido.\n";
    } else if (consumo < 100) {
        cout << "Tarifa aplicada: Baja\n";
    } else if (consumo <= 200) {
        cout << "Tarifa aplicada: Media\n";
    } else {
        cout << "Tarifa aplicada: Alta\n";
    }

    return 0;
}
