#include <iostream>
#include <queue>
#include <set>

using namespace std;
typedef long long ll;

int K, N;
ll misfortune=1, result=0;
int dx[]={1,-1};
queue<int> q;
set<int> s;

long bfs() {
    while(!q.empty()) {
        int Size = q.size();
        for(int i=0; i<Size;i++) {
            int a = q.front();
            q.pop();
            for(int i=0;i<2;i++) {
                int nx = a + dx[i];
                if(!s.count(nx)) {
                    s.insert(nx); q.push(nx);
                    result+=misfortune;

                    if(!--K) return result;
                }
            }
        }
        misfortune++;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> N >> K;
    
    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        q.push(x); s.insert(x);
    }
    cout << bfs();
}