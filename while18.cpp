#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 50 + 1;
    int intento, i = 5;
    while (i--) {
        cout << "Adivina (1-50): ";
        cin >> intento;
        if (intento == secreto) {
            cout << "¡Ganaste!";
            return 0;
        } else {
            cout << (intento < secreto ? "Muy bajo\n" : "Muy alto\n");
        }
    }
    cout << "Perdiste. Era " << secreto;
    return 0;
}
