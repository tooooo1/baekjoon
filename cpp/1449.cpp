#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,L;
vector<int> v;

int main() {
    cin >> N >> L;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int result=1;
    int temp=L-1;

    for(int i=0;i<N-1;i++) {
        if(v[i+1]-v[i]<=temp) {
            temp-=v[i+1]-v[i];
        } else {
            temp=L-1;
            result++;
        }
    }
    cout << result;
}