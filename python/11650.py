import sys
data = []
n = int(sys.stdin.readline())
for i in range(n):
    data.append(list(map(int,sys.stdin.readline().split())))
data.sort(key=lambda x: (x[0],x[1]))

for i in data:
    print(i[0],i[1])