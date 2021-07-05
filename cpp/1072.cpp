#include <iostream>

using namespace std;

long long X, Y, Z;
int cnt=0;

int main() {
    cin >> X >> Y;
    Z=(Y*100/X);
    int temp=Z;
    
    if(Z>=99) {
        cnt=-1;
    } else {
        while(temp!=Z+1) {
            X++; Y++; cnt++;

            temp=(Y*100)/X;
        }
    }

    cout << cnt;
}