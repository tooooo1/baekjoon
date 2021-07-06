#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int N, M;
vector<ll> v;

int main() {
    cin >> N >> M;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i=0;i<M;i++) {
        sort(v.begin(),v.end());
        ll temp=v[0]+v[1];
        v[0]=temp; v[1]=temp;
    }

    ll total=0;

    for(int i=0;i<v.size();i++)
        total+=v[i];
    

    cout << total;
}