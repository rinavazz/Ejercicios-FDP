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
    cout << "Número para contar frecuencia: ";
    cin >> num;

    int contador = 0;
    for (int i=0; i < N; i++) {
        if (arr[i] == num) contador++;
    }

    cout << "El número " << num << " aparece " << contador << " veces." << endl;

    return 0;
}
