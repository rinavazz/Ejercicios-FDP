#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Tamaño de la matriz identidad (N x N): ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }

    return 0;
}
