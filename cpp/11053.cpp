#include <iostream>
#include <algorithm>

#define SIZE 1000
using namespace std;

int a;
int max_value=0;
int arr[SIZE];
int dp[SIZE];

int main() {
    cin >> a;
    for(int i=0;i<a;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<a;i++) {
        dp[i]=1;
        for(int j=0;j<i;j++)
            if(arr[i]>arr[j])
                dp[i]=max(dp[i],dp[j]+1);
        max_value=max(max_value,dp[i]);
    }
    cout<<max_value;
}