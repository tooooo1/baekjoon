from collections import Counter
import sys

input = sys.stdin.readline

N = int(input())
arr = []

for _ in range(N):
    arr.append(int(input()))

arr.sort()

print(round(sum(arr)/N))
print(arr[N//2])

temp = Counter(arr).most_common()
if len(arr) > 1:
    if temp[0][1] == temp[1][1]:
        print(temp[1][0])
    else:
        print(temp[0][0])
else:
    print(temp[0][0])

print(max(arr) - min(arr))
