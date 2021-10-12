import sys

input = sys.stdin.readline

N = int(input())

X = [0 for _ in range(N+1)]

for i in range(1, N+1):
    if i == 1:
        X[i] == 0
        continue
    
    X[i] = X[i-1] + 1

    if i % 3 == 0 and X[i//3] + 1 < X[i]:
        X[i] = X[i//3] + 1
    if i % 2 == 0 and X[i//2] + 1< X[i]:
        X[i] = X[i//2] + 1

print(X[N])
for i in range(N):
    print(q[i], end=' ')