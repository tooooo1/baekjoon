numbers = set(range(1,10001))

notSelfNumbers = set()

for i in range(1,10001):
    for j in str(i): #문자열로하여 인덱스 접근
        i += int(j)
    notSelfNumbers.add(i)

selfNum = numbers - notSelfNumbers

for i in sorted(selfNum):
    print(i)