#include <iostream>
#include <queue>

using namespace std;
#define MAX 52

int w,h;
int cnt=0;
int arr[MAX][MAX];
int visited[MAX][MAX];
int dw[] = {1,0,-1,0,1,-1,1,-1};
int dh[] = {0,1,0,-1,1,1,-1,-1};
queue<pair<int,int>> q;

void reset() {
	while (!q.empty()) q.pop();
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			visited[i][j] = 0;
			arr[i][j] = 0;
            cnt=0;
		}
	}
}

void bfs(int h,int w) {
    q.push({h,w});
    while(!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        visited[h][w]=true;
        for(int i=0;i<8;i++) {
            int nh = a + dh[i];
            int nw = b + dw[i];
            if(0<=nh && 0<=nw && nh <MAX && nw < MAX && !visited[nh][nw]&& arr[nh][nw]==1) {
                q.push({nh,nw});
                visited[nh][nw]=true;
            }
        }
    }
}

int main() {
    while(true) {
        cin >> w >> h;
        if(!w&&!h) break;

        for(int i=0;i<h;i++) {
            for(int j=0;j<w;j++) {
                cin >> arr[i][j];
            }
        }

        for(int i=0;i<h;i++) {
            for(int j=0;j<w;j++) {
                if(arr[i][j]&&!visited[i][j]) {
                    bfs(i,j);
                    cnt++;
                }
            }
        }

        cout << cnt << " ";
        reset();
    }
}