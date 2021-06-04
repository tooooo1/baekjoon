#include <iostream>

using namespace std;
#define MAX 9

int N,M;
int arr[MAX];
bool visited[MAX];

void dfs(int a, int k) {
    if(k==M) {
        for(auto i =0;i<M;i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    for(auto i=a; i<=N;i++) {
        if(!visited[i]) {
            visited[i]=true;
            arr[k]=i;
            dfs(i+1,k+1);
            visited[i]=false;
        }
    }
}

int main() {
    cin >> N >> M;
    dfs(1,0);
}