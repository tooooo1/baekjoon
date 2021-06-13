#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int cnt=1;
vector<pair<int,int>> v;

bool comp(pair<int,int> a,pair<int,int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    } else {
        return a.second <b.second;
    }
}

int main() {
    cin>> N;

    for(int i=0;i<N;i++) {
        int x,y;
        cin >> x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end(),comp);

    int now = v[0].second;
    for (int i=1;i<N;i++) {
        if (now <=v[i].first) {
            cnt++;
            now=v[i].second;
        }
    }

    cout << cnt;
}