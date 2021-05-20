X = int(input())
count = 0

while(X!=1):  
    if(X%3==0):
        X=X/3
    elif(X%2==0):
        X=X/2
    else:
        X=X-1
    count = count + 1
    print(count)
    print(X)

print(count)