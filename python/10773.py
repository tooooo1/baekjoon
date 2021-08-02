K = int(input())
list_= []

for _ in range(K):
    input_ = input()
    if(input_ == '0'): list_.pop()
    else: list_.append(int(input_))

print(sum(list_))