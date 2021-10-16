A, B, C = map(int, input().split())

if B>=C:
    print(-1)
else:
    result=int(A/(C-B))
    print(result+1)