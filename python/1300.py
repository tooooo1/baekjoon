import sys

input = sys.stdin.readline

N = int(input())
k = int(input())
A = [[] for _ in range(N)]

for i in range(N):
    for j in range(N):
        A[i].append((i+1)*(j+1))

B = sum(A, list())

B.sort()

print(B[k-1])
