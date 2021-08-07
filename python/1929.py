import sys

M, N = map(int, sys.stdin.readline().split()) #입력 받기 (속도 향상)

def isPrime(a): #에라토스테네스의 체
    if(a<2):
        return False
    for i in range(2,int(a**0.5) + 1): #시간 초과를 피하기 위해 제곱근까지만 조사
        if(a%i==0):
            return False
    return True

for i in range(M,N+1): #범위 안에서
    if(isPrime(i)): #소수라면
        print(i) #값 출력