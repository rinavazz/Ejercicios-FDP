#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de números: ";
    cin >> N;

    int arr[N];
    cout << "Introduce los números:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Arreglo invertido: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
