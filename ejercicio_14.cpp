#include <iostream>
using namespace std;

int main() {
    int anio;

    cout << "Ingresa un año: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "Es un año bisiesto." << endl;
    } else {
        cout << "No es un año bisiesto." << endl;
    }

    return 0;
}
