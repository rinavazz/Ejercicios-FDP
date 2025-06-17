#include <iostream>
using namespace std;

bool buscarSubarreglo(int arr[], int N, int sub[], int M) {
    for (int i = 0; i <= N - M; i++) {
        bool encontrado = true;
        for (int j = 0; j < M; j++) {
            if (arr[i + j] != sub[j]) {
                encontrado = false;
                break;
            }
        }
        if (encontrado) return true;
    }
    return false;
}

int main() {
    int N, M;
    cout << "Tamaño del arreglo principal: ";
    cin >> N;
    int arr[N];
    cout << "Introduce el arreglo principal:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Tamaño del subarreglo: ";
    cin >> M;
    int sub[M];
    cout << "Introduce el subarreglo:\n";
    for (int i = 0; i < M; i++) cin >> sub[i];

    if (buscarSubarreglo(arr, N, sub, M))
        cout << "El subarreglo está contenido en el arreglo principal.\n";
    else
        cout << "El subarreglo NO está contenido en el arreglo principal.\n";

    return 0;
}
