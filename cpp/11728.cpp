#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;

int main() {
    cin>> n >> m;
    
    int a[n+1],b[m+1];
    vector<int> c;

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<m;i++) {
        cin >>b[i];
    }

    for(int i=0;i<n;i++) {
        c.push_back(a[i]);
    }
    for(int i=0;i<m;i++) {
        c.push_back(b[i]);
    }

    sort(c.begin(),c.end());

    for(int i=0;i<n+m;i++) {
        cout<<c[i]<<" ";
    }
}