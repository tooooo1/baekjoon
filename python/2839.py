N = int(input())
a = 0

while True:
    if (N % 5) ==0:
        a +=(N//5)
        print(a)
        break
    N +=-3
    a += 1
    if N <0:
        print("-1")
        break