import sys
import heapq

input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
indegree = [0] * (N+1)

for i in range(M):
    x, y = map(int, input().split())
    graph[x].append(y)
    indegree[y]+=1

def topo():
    result = []
    q = []

    for i in range(1,N+1):
        if indegree[i]==0:
            heapq.heappush(q,i)
    
    while q:
        now = heapq.heappop(q)
        result.append(now)

        for i in graph[now]:
            indegree[i]-=1

            if indegree[i]==0:
                heapq.heappush(q,i)
        
    print(*result)

topo()