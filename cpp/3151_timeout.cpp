#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int N;

int main() {
    cin >> N;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int start = 0;
    int end = 2;
    int cnt=0;

    while(start<=end-2 && end<N) {
        for(int i=start+1;i<end;i++) 
            if(v[start]+v[end]+v[i] == 0) cnt++;
        end++;
        if(end == N-1) {
            start++;
            end = start+2;
        }
    }
    cout << cnt;
}