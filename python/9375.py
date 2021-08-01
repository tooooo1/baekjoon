T = int(input())


T=T+1

while(True):
    dict_ = dict()
    T = T-1
    if(not T): break

    N = int(input())
    for _ in range(N):    
        a, b = map(str, input().split())
        if b in dict_:
            dict_[b] += 1
        else:
            dict_[b] = 1
    
    result = 1
    for a, b in dict_.items():
        result = result * (b + 1)

    print(result-1)