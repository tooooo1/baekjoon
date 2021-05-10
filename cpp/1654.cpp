#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int k,n;
vector<int> lan_cable;

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    cin >> k >> n;

    for(auto i = 0; i<k;i++) {
        int x;
        cin >> x;
        lan_cable.push_back(x);
    }

    int start = 0;
    int end = *max_element(lan_cable.begin(),lan_cable.end());
    int result =0;

    while(start<=end) {
        int count =0;
        int mid = (start + end)/2;

        for (auto i = 0; i < k; i++) {
            count+=lan_cable[i]/mid;
        }
        if(count<n) {
            end=mid-1;
        } else {
            result = mid;
            start = mid+1;
        }
    }
    cout << result;
}