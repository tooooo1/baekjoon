alpha = input() #문자 입력

alphaCount = [-1]*26 #-1로 배열 초기화

for i in range(len(alpha)):
    if alphaCount[ord(alpha[i])-97] !=-1: #첫 번째로 등장한 단어 위치가 아니면 jump
        continue
    else:
        alphaCount[ord(alpha[i])-97]=i #첫 번째 등장일 시 check

print(*alphaCount) #배열 전체 출력