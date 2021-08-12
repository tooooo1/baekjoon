#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        for(int j=0;j<=i;j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for(int i=N-1;i>0;i--) {
        for(int j=0;j<i;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
