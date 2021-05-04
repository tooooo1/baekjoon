#include <iostream>

using namespace std;

int def(int n) {
    if (n==0) {
        return 0;
    } else if (n==1) {
        return 1;
    } else {
        return (def(n-1) + def(n-2));
    }
}

int main() {
    int input;
    cin >> input;

    cout << def(input);
}

