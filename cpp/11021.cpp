#include <iostream>

using namespace std;

int T, A, B;

int main() {
    cin >> T;

    for(int i=1;i<=T;i++) {
        cin >> A >> B;

        cout << "Case #" << i <<": " << A+B << "\n";
    }
}