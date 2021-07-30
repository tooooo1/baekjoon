#include <iostream>

using namespace std;

int A,B;

int main() {
    cin >> A >> B;

    while(A||B) {
        cout << A+B << "\n";

        cin >> A >> B;
    }
}