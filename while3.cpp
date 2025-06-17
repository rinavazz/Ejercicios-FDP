#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;
    do {
        cout << "Adivina el número (1-100): ";
        cin >> intento;
        if (intento < secreto)
            cout << "Muy bajo\n";
        else if (intento > secreto)
            cout << "Muy alto\n";
    } while (intento != secreto);
    cout << "¡Correcto!";
    return 0;
}
