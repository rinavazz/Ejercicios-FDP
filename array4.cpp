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

    int num;
    cout << "Número a buscar: ";
    cin >> num;

    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (arr[i] == num) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << "Número encontrado." << endl;
    else
        cout << "Número NO encontrado." << endl;

    return 0;
}
