#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Tamaño de cada arreglo: ";
    cin >> N;

    int arr1[N], arr2[N], arrFusion[2*N];

    cout << "Introduce elementos del primer arreglo:\n";
    for (int i = 0; i < N; i++) cin >> arr1[i];

    cout << "Introduce elementos del segundo arreglo:\n";
    for (int i = 0; i < N; i++) cin >> arr2[i];

    // Fusionar
    for (int i = 0; i < N; i++) arrFusion[i] = arr1[i];
    for (int i = 0; i < N; i++) arrFusion[N + i] = arr2[i];

    cout << "Arreglo fusionado: ";
    for (int i = 0; i < 2*N; i++) cout << arrFusion[i] << " ";
    cout << endl;

    return 0;
}
