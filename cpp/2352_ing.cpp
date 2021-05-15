#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
vector<int> arr;


int main() {
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(arr[i]>arr[j])
        }
    }
}