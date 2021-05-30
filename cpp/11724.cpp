#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

int N,M,cnt=0;

int arr[MAX][MAX];
bool visited[MAX];
queue<int> q;

void bfs(int k) {
    q.push(k);
    visited[k]=true;
    cnt++;

    while(!q.empty()) {
        k = q.front();
        q.pop();

        for(auto i =1;i<=N;i++) {
            if(arr[k][i]==1 && !visited[i]) {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main() {
    cin >> N>>M;

    for(auto i=1;i<=M;i++) {
        int u,v;
        cin >> u >> v;
        arr[u][v]=1;
        arr[v][u]=1;
    }
    
    for(auto i=1;i<=N;i++) {
        if(!visited[i]) {
            bfs(i);
        }
    }

    cout << cnt;
}