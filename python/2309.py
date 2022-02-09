li = [int(input()) for _ in range(9)]

li.sort()

searchNum = sum(li) - 100
start, end = 0, len(li)-1

while start <= end:
    if searchNum > li[start] + li[end]:
        start += 1
    elif searchNum < li[start] + li[end]:
        end -= 1
    else:
        delFirst, delSecond = start, end
        break

for i in range(9):
    if i not in (delFirst, delSecond):
        print(li[i])
