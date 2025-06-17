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

    int suma = 0;
    for (int i = 0; i < N; i++) {
        suma += arr[i];
    }

    double promedio = (double)suma / N;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
