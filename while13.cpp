#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;
    cout << "¿Cuántos términos? ";
    cin >> n;
    while (n--) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}
