#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de números: ";
    cin >> N;

    int arr[N];
    cout << "Introduce los números:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Arreglo sin duplicados: ";
    for (int i = 0; i < N; i++) {
        bool repetido = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
