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

    long long producto = 1;
    for (int i=0; i < N; i++) {
        producto *= arr[i];
    }

    cout << "Producto de los elementos: " << producto << endl;

    return 0;
}
