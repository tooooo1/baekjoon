#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
vector<int> arr;
vector<int> target;

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    cin >> n;
    int count[n]={0,};
    for(auto i = 0;i<n;i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());

    cin >> m;
    for(auto i =0; i<m;i++) {
        int x;
        cin >> x;

        cout << upper_bound(arr.begin(),arr.end(),x) - lower_bound(arr.begin(),arr.end(),x)<< " ";
    }
}