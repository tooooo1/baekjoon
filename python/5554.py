a = int(input())
b = int(input())
c = int(input())
d = int(input())

x = (a+b+c+d)//60
y = (a+b+c+d) % 60

if ((3599 >= (a+b+c+d)) and (60 <= (a+b+c+d))):
    print(x)
    print(y)
