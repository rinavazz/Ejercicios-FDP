#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Tamaño de las matrices (N x N): ";
    cin >> N;

    int A[N][N], B[N][N], C[N][N];

    cout << "Introduce la matriz A:\n";
    for (int i=0; i < N; i++)
        for (int j=0; j < N; j++)
            cin >> A[i][j];

    cout << "Introduce la matriz B:\n";
    for (int i=0; i < N; i++)
        for (int j=0; j < N; j++)
            cin >> B[i][j];

    // Inicializar matriz resultado en 0
    for (int i=0; i < N; i++)
        for (int j=0; j < N; j++)
            C[i][j] = 0;

    // Multiplicación
    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            for (int k=0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matriz resultado C = A * B:\n";
    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
