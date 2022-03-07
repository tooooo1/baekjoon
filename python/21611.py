import sys
from collections import deque

input = sys.stdin.readline

dx = [0, 1, 0, -1]
dy = [-1, 0, 1, 0]

N, M = map(int, input().split())
arr = [list(map(int, input().strip().split())) for _ in range(N)]
blizzard = [list(map(int, input().strip().split())) for _ in range(M)]
tornado = list()
score = [0]*3


def indexing():
    x, y = N // 2, N // 2
    depth = 0

    while True:
        for i in range(4):
            if not i % 2:
                depth += 1
            for j in range(depth):
                x += dx[i]
                y += dy[i]
                tornado.append((x, y))
                if not x and not y:
                    return


def magic(dir, dist):
    x, y = N // 2, N // 2
    for _ in range(dist):
        x += dx[dir]
        y += dy[dir]
        if x < 0 or x >= N or y < 0 or y >= N:
            break
        arr[x][y] = 0

    trim()
    while bomb():
        trim()
    grouping()


def trim():
    blankIdx = deque()
    for x, y in tornado:
        if arr[x][y] == 0:
            blankIdx.append((x, y))
        elif arr[x][y] > 0 and blankIdx:
            nx, ny = blankIdx.popleft()
            arr[nx][ny] = arr[x][y]
            arr[x][y] = 0
            blankIdx.append((x, y))


def bomb():
    visited = deque()
    cnt = 0
    num = -1
    flag = False
    for x, y in tornado:
        if num == arr[x][y]:
            visited.append((x, y))
            cnt += 1
        else:
            if cnt >= 4:
                score[num-1] += cnt
                flag = True

            while visited:
                nx, ny = visited.popleft()
                if cnt >= 4:
                    arr[nx][ny] = 0

            num = arr[x][y]
            cnt = 1
            visited.append((x, y))

    return flag


def grouping():
    cnt = 1
    tmpx, tmpy = tornado[0]
    num = arr[tmpx][tmpy]
    nums = []

    for i in range(1, len(tornado)):
        x, y = tornado[i][0], tornado[i][1]
        if num == arr[x][y]:
            cnt += 1
        else:
            nums.append(cnt)
            nums.append(num)
            num = arr[x][y]
            cnt = 1

    idx = 0
    for x, y in tornado:
        if not nums:
            break
        arr[x][y] = nums[idx]
        idx += 1
        if idx == len(nums):
            break


tornado = deque()
indexing()

for a, b in blizzard:
    magic(a-1, b)

answer = 0
for i in range(3):
    answer += (i+1) * score[i]

print(answer)
