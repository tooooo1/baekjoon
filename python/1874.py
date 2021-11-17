N = int(input())

q = []
op = []
count = 1
flag = True

for i in range(N):
    x = int(input())
    while count <= x:
        q.append(count)
        count += 1
        op.append('+')
    if q[-1] == x:
        q.pop()
        op.append('-')
    else:
        flag = False

if not flag:
    print('NO')
else:
    for i in op:
        print(i)
