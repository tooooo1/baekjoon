N = int(input())

tree = [[0]* (N+1) for _ in range(N+1)]

print(tree)

for _ in range(N-1):
    first, second, weight = map(int, input().split())
    tree[first][second] = weight

for i in range(N):
    print(tree[i])