import sys

input = sys.stdin.readline

N=int(input())
parent=[i for i in range(N)]
tempEdges = []
edges = []
result = 0

def find(parent,x):
    if parent[x]!=x:
        parent[x] = find(parent,parent[x])
    return parent[x]

def union(parent,a,b):
    rootA = find(parent,a)
    rootB = find(parent,b)

    if rootA<rootB: parent[rootB]=rootA
    else: parent[rootA]=rootB

for i in range(N):
    a, b, c = map(int, input().split())
    tempEdges.append((a,b,c,i))

for i in range(3):
    tempEdges.sort(key=lambda x:x[i])
    for j in range(1, N):
        edges.append((abs(tempEdges[j-1][i]-tempEdges[j][i]),tempEdges[j-1][3],tempEdges[j][3]))

edges.sort()

for i in range(len(edges)):
    if find(parent, edges[i][1]) != find(parent, edges[i][2]):
        union(parent,edges[i][1],edges[i][2])
        result+=edges[i][0]

print(result)