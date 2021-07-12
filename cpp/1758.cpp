#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> v;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(),v.rend());

    long long total = 0;

    for(int i=0;i<N;i++)
        if(v[i]-((i+1)-1) >0) total+=v[i]-((i+1)-1);

    cout << total;
}