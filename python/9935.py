inputString = input()
deleteString = input()

lastChar = deleteString[-1]
stack = []
size = len(deleteString)

for i in inputString:
    stack.append(i)
    if i == lastChar and ''.join(stack[-size:]) == deleteString:
        del stack[-size:]
    
if stack:
    print(''.join(stack))
else:
    print("FRULA")