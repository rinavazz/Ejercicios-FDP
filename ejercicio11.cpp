/*Número Más Cercano a 100
Solicita dos números y muestra cuál de ellos está más cerca de 100.*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int distancia1, distancia2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    //calculo el valor absoluto de num1 y num2
    if (100 - num1 < 0)
        distancia1 = -(100 - num1);
    else
        distancia1 = 100 - num1;

    if (100 - num2 < 0)
        distancia2 = -(100 - num2);
    else
        distancia2 = 100 - num2;

    cout << "\nResultado:\n";

    if (distancia1 < distancia2) {
        cout << num1 << " esta mas cerca de 100." << endl;
    } else if (distancia2 < distancia1) {
        cout << num2 << " esta mas cerca de 100." << endl;
    } else {
        cout << "Ambos numeros estan a la misma distancia de 100." << endl;
    }

    return 0;
}
