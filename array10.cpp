#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de números: ";
    cin >> N;

    int arr[N];
    cout << "Introduce los números:\n";
    for (int i=0; i < N; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "Número a eliminar: ";
    cin >> num;

    cout << "Arreglo después de eliminar el número " << num << ": ";
    for (int i=0; i < N; i++) {
        if (arr[i] != num) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
