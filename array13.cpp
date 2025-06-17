#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de números: ";
    cin >> N;

    int arr[N];
    cout << "Introduce los números:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Elementos repetidos: ";
    bool hayRepetidos = false;

    for (int i = 0; i < N; i++) {
        bool repetido = false;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                repetido = true;
                break;
            }
        }
        // Verificar si ya se imprimió este número antes
        bool yaImpreso = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                yaImpreso = true;
                break;
            }
        }
        if (repetido && !yaImpreso) {
            cout << arr[i] << " ";
            hayRepetidos = true;
        }
    }

    if (!hayRepetidos) cout << "No hay elementos repetidos.";

    cout << endl;
    return 0;
}
