N = int(input())

graph = []

for _ in range(N):
    x, y = map(int,input().split())
    graph.append([x,y])

graph=sorted(graph,key=lambda x:(x[1],x[0]))

for x,y in graph:
    print(x,y)