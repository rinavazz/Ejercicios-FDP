#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;

    cout << "Ingresa el primer lado: ";
    cin >> lado1;

    cout << "Ingresa el segundo lado: ";
    cin >> lado2;

    cout << "Ingresa el tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "Es un triángulo equilátero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "Es un triángulo isósceles." << endl;
    } else {
        cout << "Es un triángulo escaleno." << endl;
    }

    return 0;
}
