#include <iostream>
#include <queue>

using namespace std;

int n,m,v;

int arr[1001][1001];
bool visit[1001];

void reset_visit() {
    for (auto i=1;i<=n;i++) {
        visit[i]=false;
    }
}

void dfs(int v) {
    visit[v]=true;
    cout << v << " ";
    
    for(int i=1;i<=n;i++) {
        if (visit[i]==1 || arr[v][i]==0)
            continue;
        dfs(i);
    }
}

void bfs(int v) {
    queue<int> q;
    q.push(v);
    visit[v]=true;
    cout << v << " ";

    while(!q.empty()) {
        v = q.front();
        q.pop();

        for(auto i=1;i<=n;i++) {
            if (arr[v][i]==1 && visit[i]==0) {
                q.push(i);
                visit[i] = true;
                cout << i << " ";
            }
        }
    }
}

int main() {
    cin >> n >> m >> v;
    for(auto i =0;i<m;i++) {
        int x,y;
        cin >> x >> y;
        arr[x][y]=1;
        arr[y][x]=1;
    }

    reset_visit();
    dfs(v);
    cout<<"\n";
    reset_visit();
    bfs(v);
}