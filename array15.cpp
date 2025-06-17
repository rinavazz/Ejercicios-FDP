
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Tamaño de los arreglos: ";
    cin >> N;

    int arr1[N], arr2[N], arrIntercalado[2*N];

    cout << "Introduce elementos del primer arreglo:\n";
    for (int i = 0; i < N; i++) cin >> arr1[i];

    cout << "Introduce elementos del segundo arreglo:\n";
    for (int i = 0; i < N; i++) cin >> arr2[i];

    for (int i = 0; i < N; i++) {
        arrIntercalado[2*i] = arr1[i];
        arrIntercalado[2*i + 1] = arr2[i];
    }

    cout << "Arreglo intercalado: ";
    for (int i = 0; i < 2*N; i++) cout << arrIntercalado[i] << " ";
    cout << endl;

    return 0;
}
