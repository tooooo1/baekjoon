from collections import deque

N, K = map(int, input().split())

q = deque()
result = []

for i in range(N):
    q.append(i+1)

while q:
    for i in range(K):
        if not i == K-1:
            temp = q.popleft()
            q.append(temp)
        else:
            temp = q.popleft()
            result.append(temp)

print("<", end="")
for i in range(len(result)):
    if not i == len(result)-1:
        print(result[i], end=", ")
    else:
        print(result[i], end="")
print(">")
