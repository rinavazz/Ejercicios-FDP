#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int N = 10;
    int nums[100] = {0}, count = 0;
    while (count < N) {
        int r = rand() % 100 + 1;
        if (nums[r] == 0) {
            nums[r] = 1;
            cout << r << " ";
            count++;
        }
    }
    return 0;
}
