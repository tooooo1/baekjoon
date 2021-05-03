import sys
from collections import deque
input = sys.stdin.readline()

n = int(input)
link = int(input)

computer = []
for i in range(n+1):
    computer.append([])

for i in range(link):
    a,b = map(int, input.split())
    computer[a].append(b)

virus = [0] * (n+1)
virus[1]=1

def bfs(computer):
    q = deque()
    q.append(1)
    count = 0
    while q:
        v= q.popleft()
        for com in computer[v]:
            if virus[com]==0:
                virus[com] == 1
                q.append(com)
                count+=1
    return count

print(bfs(computer))