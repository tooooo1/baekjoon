#include <iostream>

using namespace std;

int N, M;

int GCD(int x, int y) {
    if (x%y == 0)
        return y;
    return GCD(y, x%y);
}

int main(void) {
    cin >> N >> M;
    
    cout << M - GCD(N, M);
} 