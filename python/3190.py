import sys
from collections import deque

input = sys.stdin.readline
N = int(input())
arr = [[0] * N for _ in range(N)]
direction = {0: (0, 1), 1: (1, 0), 2: (0, -1), 3: (-1, 0)}
q = deque()
time = deque()

K = int(input())
for i in range(K):
    x, y = map(int, input().split())
    arr[x-1][y-1] = 1

L = int(input())
for i in range(L):
    X, C = input().split()
    time.append([int(X), C])


def Dummy():
    d = 0
    count = 0
    nx, ny = 0, 0
    q.append((nx, ny))
    arr[nx][ny] = 4
    while True:
        count += 1
        nx = nx + direction[d][0]
        ny = ny + direction[d][1]

        if not 0 <= nx < N or not 0 <= ny < N:
            break

        if arr[nx][ny] == 1:
            arr[nx][ny] = 4
            q.append((nx, ny))

        elif arr[nx][ny] == 0:
            arr[nx][ny] = 4
            q.append((nx, ny))
            delX, delY = q.popleft()
            arr[delX][delY] = 0

        elif arr[nx][ny] == 4:
            break

        if len(time) and time[0][0] == count:
            t, nd = time.popleft()
            if nd == 'L':
                d = (d + 3) % 4
            elif nd == 'D':
                d = (d + 1) % 4

    return count


print(Dummy())
