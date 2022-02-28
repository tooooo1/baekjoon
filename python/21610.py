import sys
from collections import deque

input = sys.stdin.readline

N, M = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(N)]
dx = [0, -1, -1, -1, 0, 1, 1, 1]
dy = [-1, -1, 0, 1, 1, 1, 0, -1]

q = deque()
q.append([N-1, 0])
q.append([N-2, 0])
q.append([N-1, 1])
q.append([N-2, 1])

for _ in range(M):
    cloud = [[0] * N for _ in range(N)]
    d, s = map(int, input().split())
    while q:
        x, y = q.popleft()
        nx = (x + dx[d-1]*s) % N
        ny = (y + dy[d-1]*s) % N
        cloud[nx][ny] = 1

    for i in range(N):
        for j in range(N):
            if cloud[i][j] == 1:
                arr[i][j] += 1

    for i in range(N):
        for j in range(N):
            if cloud[i][j] == 1:
                x, y = i, j
                cnt = 0
                for k in [1, 3, 5, 7]:
                    nx = x + dx[k]
                    ny = y + dy[k]

                    if 0 <= nx < N and 0 <= ny < N:
                        if arr[nx][ny] > 0:
                            cnt += 1
                arr[x][y] += cnt

    for i in range(N):
        for j in range(N):
            if arr[i][j] >= 2 and cloud[i][j] == 0:
                arr[i][j] -= 2
                q.append([i, j])

s = 0
for i in range(N):
    s += sum(arr[i])

print(s)
