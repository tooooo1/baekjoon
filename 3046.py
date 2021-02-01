r1, s = map(int, input().split())

r2 = 2*s-r1

if (r1, r2 >= -1000) and (r1, r2 <= 1000):
    print(r2)
