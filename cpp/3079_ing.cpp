#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll n,m;
vector<ll> people;


ll binarySearch(vector<ll>&arr,ll target, ll start, ll end) {
    while(start <= end) {
        ll mid = (start + end) /2;

        if(arr[mid]==target)
            return mid;
        else if (arr[mid]>target)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

int main() {
    cin>> n >> m;

    for (auto i = 0;i<n;i++) {
        int x;
        cin>> x;
        people.push_back(x);
    }
    sort(people.begin(),people.end());

    binarySearch(people,)
}