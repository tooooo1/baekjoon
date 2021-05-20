#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

ll n;

int main() {
    cin >> n;

    ll arr[n+1];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    ll result = 99999999999;

    ll start=0, end=n-1;
    ll one,two;

    while (start <end) {
        ll temp = arr[start] + arr[end];
        ll num = abs(temp);
        if(result>num) {
            result = num;
            one = arr[start];
            two = arr[end];
        }
        if(temp>0)
            end--;
        else start++;
    }

    cout << one << " " << two;

}