import sys
import heapq

N, K = map(int, sys.stdin.readline().split())
gem = []
bag = []

for _ in range(N):
    heapq.heappush(gem, list(map(int, sys.stdin.readline().split())))

for _ in range(K):
    bag.append(int(input()))

bag.sort()

result = 0

temp = []

for b in bag:
    while gem and b >= gem[0][0]:
        x,y = heapq.heappop(gem)
        heapq.heappush(temp,-y)

    if temp:
        result -= heapq.heappop(temp)

print(result)