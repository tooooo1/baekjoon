alpha = [0 for _ in range(26)]
text = input()

for i in text:
    alpha[ord(i)-ord('a')]+=1
    
print(*alpha)