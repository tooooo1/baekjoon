import sys

N = int(input())
operands = list(map(int, input().split()))
operators = list(map(int, input().split()))

maxValue, minValue = -sys.maxsize, sys.maxsize


def solution(result, k):
    global maxValue, minValue
    if (N == k):
        if(result > maxValue):
            maxValue = result
        if(result < minValue):
            minValue = result

    for i in range(len(operators)):
        if(operators[i] > 0):
            operators[i] -= 1
            if (i == 0):
                solution(result+operands[k], k+1)
            elif (i == 1):
                solution(result-operands[k], k+1)
            elif (i == 2):
                solution(result*operands[k], k+1)
            else:
                solution(int(result/operands[k]), k+1)
            operators[i] += 1


solution(operands[0], 1)
print(maxValue)
print(minValue)
