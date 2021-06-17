arr= [0,1,3]
for i in range(3,1001):
    arr.append(arr[i-2]*2+arr[i-1])

N=int(input())
print(arr[N]%10007)