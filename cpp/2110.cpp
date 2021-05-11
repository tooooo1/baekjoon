#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,c;
vector<int> x;

int main() {
    cin >> n>> c;

    for (auto i =0; i<n;i++) {
        int a;
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(),x.end());

    int start =0;
    int end = *max_element(x.begin(),x.end());

    while(start<=end) {
        
    }
}