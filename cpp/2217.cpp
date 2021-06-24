#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,rope;
vector<int> v;

int main() {
    cin >> N;

    for(auto i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(),v.rend());

    for(auto i=0;i<N;i++)
        rope = max(rope,v[N-i-1]*(N-i));
        
    cout << rope;
}