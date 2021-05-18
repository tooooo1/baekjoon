def prime_list(n):
    sieve=[True]*n
    m=int(n**0.5)
    for i in range(2,m+1):
        if sieve[i] == True:
            for j in range(i+i,n,i):
                sieve[j]=False
    return [i for i in range(2,n) if sieve[i] == True]


n=int(input())
count=0


for i in range(0,n):
    temp=0
    for j in range(i,n):
        temp+=prime_list(n)[j]
        if(temp==n):
            count+=1

print(count)