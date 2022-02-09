import sys

input = sys.stdin.readline

inputList = list()


def isPrime(n):
    if n == 1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


while True:
    k = int(input())

    if not k:
        break
    inputList.append(k)

countList = [0 for _ in range(len(inputList))]

for i in range(len(inputList)):
    for k in range(inputList[i]+1, inputList[i]*2 + 1):
        if isPrime(k):
            countList[i] += 1

for i in countList:
    print(i)
