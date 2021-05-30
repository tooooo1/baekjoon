#include <iostream>
#include <queue>

using namespace std;
#define MAX 51

int M,N,K;
int arr[MAX][MAX]={0,};
int visited[MAX][MAX]={0,};
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
queue<pair<int,int>> q;

void bfs(int x,int y) {
    q.push({x,y});
    while(!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        visited[a][b]=true;
        for(int i=0;i<4;i++) {
            int nx = a + dx[i];
            int ny = b + dy[i];
            if(0<=nx && 0<=ny && nx <N && ny < M && !visited[nx][ny]&& arr[nx][ny]==1) {
                q.push({nx,ny});
                visited[nx][ny]=true;
            }
        }
    }
}

void reset() {
	while (!q.empty()) q.pop();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			visited[i][j] = false;
			arr[i][j] = 0;
		}
	}
}
int main() {
    int T;
    cin >> T;

    for(int t=0;t<T;t++) {
        reset();

        cin >>M >> N >> K;
        int cnt=0;

        for(int i=0;i<K;i++) {
            int x,y;
            cin >> y >> x;
            arr[x][y]=1;
        }

        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++){
                if(arr[i][j]==1 && !visited[i][j]) {
                    bfs(i,j);
                    cnt++;
                }
            }
        }
    cout << cnt << "\n";
    }
}