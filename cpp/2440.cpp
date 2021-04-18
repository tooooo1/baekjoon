#include <iostream>

using namespace std;

int main() {
    int count;
    cin>>count;

    for (int i=0; i<count; i++) {
        for (int j=1 ; j<=count-i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}