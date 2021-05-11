#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a;
vector<int> arr;

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    cin >> a;
    for(auto i=0;i<a;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    int result=0;
    int dp[a];

    for (int i = 1; i <= a; i++) { //LIS 
        dp[i] = 1; 
        for (int j = 1; j < i; j++)
            if (arr[j] < arr[i] && dp[i] <= dp[j]) 
                dp[i] += 1; 
        result = max(result, dp[i]); 
    }

    cout << result;
}