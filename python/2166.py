import sys
import math

input = sys.stdin.readline

N = int(input())

shoelaces = list()

for _ in range(N):
    x, y = map(int, input().split())
    shoelaces.append((x, y))

shoelaces.append(shoelaces[0])

plus = 0
minus = 0

for i in range(len(shoelaces)-1):
    plus += (shoelaces[i][0] * shoelaces[i+1][1])
    minus += (shoelaces[i][1] * shoelaces[i+1][0])

result = math.fabs(0.5 * (plus-minus))
print("%.1f" % result)
