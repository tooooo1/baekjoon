#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

ll k,n;

int main() {
    cin >> k >> n;

    ll arr[k];

    for(auto i =0; i<k;i++) {
        cin>> arr[i];
    }

    ll start =1;
    ll end = *max_element(arr,arr+k);
    ll result =0;

    while(start<=end) {
        ll mid=(start+end)/2;
        ll count =0;

        for(auto i=0;i<k;i++) {
            count+=arr[i]/mid;
        }
        if(count<n) {
            end=mid-1;
        } else {
            start = mid +1;
            result=mid;
        }
    }
    cout << result;
}