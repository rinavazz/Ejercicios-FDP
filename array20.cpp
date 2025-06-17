#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Tamaño de la matriz (N x N): ";
    cin >> N;

    int M[N][N];
    cout << "Introduce la matriz:\n";
    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            cin >> M[i][j];
        }
    }

    cout << "Elementos en la diagonal principal: ";
    for (int i=0; i < N; i++) {
        cout << M[i][i] << " ";
    }
    cout << endl;

    return 0;
}
