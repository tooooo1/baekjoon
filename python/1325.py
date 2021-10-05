import sys
from collections import deque

input = sys.stdin.readline

N, M = map(int, input().split())
arr = [[] for _ in range(N+1)]
result = []
q = deque()
maxCnt = 0

for i in range(M):
    a, b = map(int, input().split())
    arr[b].append(a)

def bfs(x):
    visited = [0 for _ in range(N+1)]
    q.appendleft(x)
    visited[x]=1
    cnt = 1
    while q:
        x=q.popleft()
        for i in arr[x]:
            if visited[i] == 0:
                visited[i] = 1
                cnt +=1
                q.append(i)
    return cnt

for i in range(1,N+1):
    temp = bfs(i)
    if maxCnt == temp:
        result.append(i)
    elif maxCnt < temp:
        maxCnt=temp
        result=[]
        result.append(i)

print(*result)