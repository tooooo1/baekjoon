from collections import defaultdict
T = int(input())

for _ in range(T):
    dict_ = defaultdict(int)
    N = int(input())
    for _ in range(N):    
        a, b = map(str, input().split())
        dict_[b] += 1
    result = 1
    for a, b in dict_.items():
        result *= (b + 1)
    print(result - 1)