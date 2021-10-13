import sys

input = sys.stdin.readline

N, M = map(int, input().split())
edges = []
result = 0
parent = [i for i in range(N+1)]

for _ in range(M):
    x, y, z = map(int,input().split())
    edges.append([z,x,y])

def find(parent, x):
    if parent[x] != x:
        parent[x] = find(parent, parent[x])
    return parent[x]

def union(parent, a, b):
    rootA = find(parent,a)
    rootB = find(parent,b)

    if rootA< rootB: parent[rootB]=rootA
    else: parent[rootA]=rootB

edges.sort()
result = []

for e in edges:
    z, x, y = e

    if find(parent,x) != find(parent,y):
        union(parent,x,y)
        result.append(z)  

print(sum(result[:-1]))