#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,K;
    int count = 0;
    cin >> N >> K;

    int a[N];
    vector<int> money;
    for (int i =0; i<N;i++) {
        cin>>a[i];
        money.push_back(a[i]);
    }

    for (;;) {
        while(money.back() <=K) {
            K-=money.back();
            count++;
        }
        money.pop_back();

        if(K==0)
            break;
    }

    cout << count;
}