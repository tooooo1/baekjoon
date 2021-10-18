import sys

input = sys.stdin.readline
hamburger = []

for _ in range(3):
    hamburger.append(int(input()))

temp = hamburger[0]*2

for _ in range(2):
    drink = int(input())
    for i in range(3):
        temp = min(temp, hamburger[i]+drink-50)

print(temp)