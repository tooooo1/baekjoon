N=int(input())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
B.sort(reverse=True)

result = 0

for a, b in zip(A, B):
    result = result + a * b

print(result)