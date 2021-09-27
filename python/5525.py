N = int(input())
M = int(input())
S = input()

result = 0
i = 1
count = 0

while i < M-1:
    value = S[i - 1:i + 2]
    if value == 'IOI':
        count += 1
        if count == N:
            result += 1
            count -= 1
        i += 1
    else:
        count = 0
    i += 1
print(result)