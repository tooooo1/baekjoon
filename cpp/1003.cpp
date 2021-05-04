#include <iostream>

using namespace std;

int count_zero = 0;
int count_one = 0;

int fibonacci(int n) {
    if (n == 0) {
        count_zero++;
        return 0;
    } else if (n == 1) {
        count_one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int T;
    cin >> T;
    int n[T];
    
    for (int i = 0; i < T; i++) {
        cin >> n[i];
    }
    
    for (int i = 0; i< T; i++) {
        fibonacci(n[i]);

        cout << count_zero << " " <<count_one << '\n';

        count_zero =0;
        count_one =0;
    }
}