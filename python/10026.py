import sys
from collections import deque

input = sys.stdin.readline
N = int(input())
arr = [list(map(str, input().strip())) for _ in range(N)]
visited = [[0]*(N+1) for _ in range(N+1)]
dx = [0,0,-1,1]
dy = [1,-1,0,0]

q = deque()
ans = 0

def bfs(x,y):
    global ans
    q.appendleft([x,y])
    visited[x][y]=1
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<=nx<N and 0 <=ny<N and visited[nx][ny]==0:
                if arr[x][y]==arr[nx][ny]:
                    visited[nx][ny]=1
                    q.append([nx,ny])
        
    
for i in range(N):
    for j in range(N):
        if visited[i][j]==0:
            bfs(i,j)
            ans+=1
print(ans,end=' ')
for i in range(N):
    for j in range(N):
        if arr[i][j]=='R':
            arr[i][j]='G'
visited = [[0]*(N+1) for _ in range(N+1)]
ans = 0
for i in range(N):
    for j in range(N):
        if visited[i][j]==0:
            bfs(i,j)
            ans+=1
print(ans)