import sys
sys.setrecursionlimit(10 ** 7)
input = sys.stdin.readline

K = int(input())


def dfs(n):
    global result
    visited[n] = 1
    trace.append(n)
    num = team[n]

    if visited[num]:
        if num in trace:
            result += trace[trace.index(num):]
        return
    else:
        dfs(num)


for _ in range(K):
    N = int(input())

    team = [0] + list(map(int, input().split()))
    visited = [0 for _ in range(N+1)]
    result = []
    for i in range(1, N+1):
        if not visited[i]:
            trace = []
            dfs(i)
    print(N-len(result))
