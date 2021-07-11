#include <iostream>

using namespace std;

long long num, dp[91]; //이친수의 개수 값이 int 의 범위보다 커져서 long long 사용

int main() {
    cin >> num;
    dp[1]=1; dp[2]=1;

    for(int i=3;i<=num;i++)
        dp[i]= dp[i-1] + dp[i-2];

    cout << dp[num];
}