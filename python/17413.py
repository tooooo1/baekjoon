inputFirst = input()
inputString = []

message = ""
flag = True

# 괄호 안에 있는 띄어쓰기는 무시하고
# 괄호 밖에 있는 띄어쓰기 인식하여 배열 넣기
for i in range(len(inputFirst)):
    if inputFirst[i] == '<':
        flag = False
    elif inputFirst[i] == '>':
        flag = True
    
    if inputFirst[i] == ' ' and flag:
        inputString.append(message)
        message=""
    else:
        message+=inputFirst[i]
    
    if i == (len(inputFirst)-1):
        inputString.append(message)

# 배열 하나하나 검사
# 값에 괄호가 있냐없냐로 케이스 분류
for i in range(len(inputString)):
    if ('<' or '>') not in inputString[i]:
        inputString[i] = inputString[i][::-1]
    else:
        total=""
        message=""
        parentheses=""
        flag = True
        #괄호가 있다면 괄호 안에 있는 값은 거꾸로 X
        #괄호 밖에 있는 값은 거꾸로
        for j in range(len(inputString[i])):
            if inputString[i][j]== '<':
                total+=message[::-1]
                message=""
                parentheses+=inputString[i][j]
                flag = False
                continue
            elif inputString[i][j]== '>':
                parentheses+=inputString[i][j]
                flag = True
                total+=parentheses
                parentheses=""
                continue

            if flag:
                message+=inputString[i][j]
            else:
                parentheses+=inputString[i][j]

            if j == len(inputString[i])-1:
                total+=message[::-1]
        inputString[i]=total
        
#출력
print(" ".join(inputString))