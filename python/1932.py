N=int(input())
T=[]

for _ in range(N):
    T.append(list(map(int,input().split())))

for i in range(1,N):
    for j in range(i+1):
        if j==0:
            T[i][0] = T[i-1][0] + T[i][0]
        elif i==j:
            T[i][j] = T[i-1][j-1] + T[i][j]
        else:
            T[i][j] = max(T[i-1][j-1] + T[i][j], T[i-1][j] + T[i][j])

print(max(T[N-1]))