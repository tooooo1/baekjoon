#include <iostream>

using namespace std;
#define MAX 1025

int arr[MAX][MAX],dp[MAX][MAX];
int N, M;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            cin >> arr[i][j];
            dp[i][j] = dp[i-1][j]+dp[i][j-1] - dp[i-1][j-1]+arr[i][j];
        }
    }

    int x1,y1,x2,y2, result;

    for(int i=0;i<M;i++) {
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        result = dp[x2][y2] - dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
        cout << result << "\n";
    }
}