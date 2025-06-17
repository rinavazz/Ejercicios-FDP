#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de números: ";
    cin >> N;

    int arr[N];
    cout << "Introduce los números:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    int ultimo = arr[N-1];
    for (int i = N-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = ultimo;

    cout << "Arreglo rotado a la derecha: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
