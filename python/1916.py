import sys
from heapq import heappush, heappop

input = sys.stdin.readline
INF = 1e9

N = int(input())
M = int(input())
graph = [[] for _ in range(N)]
dp = [INF]*N
heap = []

for _ in range(M):
    u, v, w = map(int, input().split())
    graph[u-1].append([v-1, w])

start, end = map(int, input().split())


def dijkstra(K):
    dp[K-1] = 0
    heappush(heap, [0, K-1])
    while heap:
        cost, pos = heappop(heap)
        if dp[pos] < cost:
            continue
        for p, c in graph[pos]:
            c += cost
            if c < dp[p]:
                dp[p] = c
                heappush(heap, [c, p])


dijkstra(start)

print(dp[end-1])
