N,X = map(int, input().split())
num_list=list(map(int,input().split()))
A=[]

for a in num_list:
    if(a<X):
        A.append(a)

print(*A)