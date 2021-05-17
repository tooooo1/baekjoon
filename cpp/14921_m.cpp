#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

ll n,close;
vector<ll> arr;
vector<ll> input;

int main() {
    cin >> n; 
    for(int i=0;i<n;i++) {
        ll x;
        cin>>x;
        arr.push_back(x);
    }

    for(int i=0;i<n;i++) { //두 용액 더하기
        for(int j=0;j<i;j++) {
            if(i!=j) {
                input.push_back(arr[i]+arr[j]);
            }
        }
    }
    
    sort(input.begin(),input.end()); // 정렬

    ll start=0;
    ll end = input.size()-1;

    while(start<=end) { // 0과 가까운 값 찾기
        ll mid = (start + end) /2;

        if(input[mid]>0) {
            end = mid-1;
        } else {
            close = mid;
            start=mid+1;
        }

        if(max(0-input[mid],0-input[mid-1])) { //0과 제일 가까운 값 찾기
            close=input[mid];
        }else {
            close=input[mid-1];
        }
    }

    cout<< close; 
}