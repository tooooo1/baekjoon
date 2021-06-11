result = num = int(input())
cnt = 0

while True:
    temp = num//10 + num%10
    temp_new = (num%10)*10 + temp%10
    cnt += 1
    num = temp_new
    if temp_new == result:
        break

print(cnt)