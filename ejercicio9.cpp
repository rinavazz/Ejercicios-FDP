#include <iostream> 
using namespace std;
// El objetivo del programa será Muestrar todos los números del 1 al 100 que sean divisibles por 3 y por 5.
int main() {
    // Imprimir los números del 1 al 100 que son divisibles por 3 y por 5
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}