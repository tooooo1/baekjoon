from sys import stdin

N = int(stdin.readline())

len_N = len(str(N))

count = 0

for i in range(len_N -1):
    count += 9 * 10 ** i * (i+1)

print(count + (N - 10**(len_N-1) + 1) * len_N)