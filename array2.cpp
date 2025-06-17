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

    int mayor = arr[0];
    int menor = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > mayor)
            mayor = arr[i];
        if (arr[i] < menor)
            menor = arr[i];
    }

    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}
