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

    int pares = 0, impares = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}
