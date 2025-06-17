#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Cantidad de números: ";
    cin >> N;

    int arr[N];
    cout << "Introduce los números:\n";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int suma = 0;
    for(int i = 0; i < N; i++) {
        suma += arr[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;
    return 0;
}
