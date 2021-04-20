N=int(input())

count=1
sumNum=1

while True:
    if N==1:
        print('1')
        break
    else:
        sumNum+=count*6
        if N<=sumNum:
            print(count+1)
            break
        else:
            count+=1