import sys

input = sys.stdin.readline
R, C = map(int, input().split())
l = [list(input().strip()) for _ in range(R)]

dx = [0,0,1,-1]
dy = [1,-1,0,0]

def bfs(x,y):
    global answer
    q = set([(x,y,l[x][y])])

    while q:
        x, y, ans = q.pop()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if(0<= nx < R and 0<=ny<C and (l[nx][ny] not in ans)):
                q.add((nx,ny,ans+l[nx][ny]))
                answer = max(answer, len(ans)+1)

answer = 1
bfs(0,0)
print(answer)