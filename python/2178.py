import sys
from collections import deque

input = sys.stdin.readline
N, M = map(int, input().split())
arr = [list(map(str, input().strip())) for _ in range(N)]
visited = [[0] * M for _ in range(N)]


dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]
q = deque()


def bfs(x, y):
    q.append([x, y])
    visited[x][y] = 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < N and 0 <= ny < M and not visited[nx][ny] and arr[nx][ny] == '1':
                q.append([nx, ny])
                visited[nx][ny] = visited[x][y] + 1


bfs(0, 0)
print(visited[N-1][M-1])
