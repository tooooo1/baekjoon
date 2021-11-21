import sys
from heapq import heappush, heappop

input = sys.stdin.readline
INF = 1e9

# 다익스트라
def dijkstra(K):
    dp[K-1] = 0
    heappush(heap, [0, K-1])
    while heap:
        cost, pos = heappop(heap)
        for p, c in graph[pos]:
            c += cost
            if c < dp[p]:
                dp[p] = c
                heappush(heap, [c, p])


# 입력
V, E = map(int, input().split())
K = int(input())
graph = [[] for _ in range(V)]
dp = [INF]*V
heap = []
for _ in range(E):
    u, v, w = map(int, input().split())
    graph[u-1].append([v-1, w])

dijkstra(K)

# 출력
for i in range(V):
    print("INF" if dp[i] == INF else dp[i])
