#include <iostream>
#include <queue>

using namespace std;
#define MAX 101

int T, H, W;
int arr[MAX][MAX];
bool visited[MAX][MAX];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
queue<pair<int, int>> q;

void bfs(int a, int b) { //bfs
    visited[a][b] = true;
    q.push({a,b});
    while(!q.empty()) {
        a = q.front().first;
        b = q.front().second;
        q.pop();
        for(int i=0;i<4;i++) {
            int na = a + dx[i];
            int nb = b + dy[i];
            if(na >= 0 && nb >=0 && H>na && W>nb) {
                if(!visited[na][nb] && arr[na][nb]) {
                    q.push({na,nb});
                    visited[na][nb]=true;
                }
            }
        }
    }
}
//초기화
void reset() {
    for(int i=0;i<MAX;i++) {
        for(int j=0;j<MAX;j++) {
            arr[i][j] = 0;
            visited[i][j] = false;
        }
    }
}

int main() {
    cin >> T;

    while(T--) { // T만큼 반복
        int cnt = 0;
        cin >> H >> W;
        //배열에 0과 1로 저장
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) {
                char x;
                cin >> x;
                if(x == '.') arr[i][j] = 0;
                else arr[i][j] = 1;
            }
        }
        //bfs가 한바퀴 끝날 때마다 count up!
        for(int i=0;i<H;i++) {
            for(int j=0;j<W;j++) {
                if(arr[i][j] && !visited[i][j]) {
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        //결과 출력
        cout << cnt << "\n";
        reset(); //초기화
    }
}