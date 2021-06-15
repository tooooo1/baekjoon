C = int(input())

for _ in range(C):
    cnt=0
    N_score=list(map(int,input().split()))
    avg=(sum(N_score)-N_score[0])/N_score[0]

    for i in N_score[1:]:
        if i>avg:
            cnt+=1
    result=cnt/N_score[0]*100
    print(f"{result:.3f}%")