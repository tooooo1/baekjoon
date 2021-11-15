from collections import deque

n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]
visited = [[0] * m for _ in range(n)]

q = deque()
maxValue = 0
totalCount = 0


def bfs(x, y):
    q.append((x, y))
    visited[x][y] = 1
    count = 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx >= n or 0 > nx or ny >= m or 0 > ny or visited[nx][ny] or not arr[nx][ny]:
                continue
            q.append((nx, ny))
            visited[nx][ny] = 1
            count += 1
    return count


for i in range(n):
    for j in range(m):
        if arr[i][j] == 1 and not visited[i][j]:
            maxValue = max(maxValue, bfs(i, j))
            totalCount += 1

print(totalCount)
print(maxValue)
