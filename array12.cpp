#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Tamaño de los arreglos: ";
    cin >> N;

    int arr1[N], arr2[N];

    cout << "Introduce elementos del primer arreglo:\n";
    for (int i = 0; i < N; i++) cin >> arr1[i];

    cout << "Introduce elementos del segundo arreglo:\n";
    for (int i = 0; i < N; i++) cin >> arr2[i];

    // Intercambiar
    for (int i = 0; i < N; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    cout << "Primer arreglo después del intercambio: ";
    for (int i = 0; i < N; i++) cout << arr1[i] << " ";
    cout << "\nSegundo arreglo después del intercambio: ";
    for (int i = 0; i < N; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
